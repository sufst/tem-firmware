/* 
 * File: 
 * Author: Alexander Mills (am9g22@soton.ac.uk)
 * CAN message structure based of what is documented in https://github.com/sufst/tem-firmware/blob/main/Orion-BMS-TEM-reference/thermistor_module_canbus.pdf
 * Revision history: 
 */
#include "config.h"

uint8_t get_checksum(uint8_t* data, uint8_t len) {
    uint8_t sum = 0;
    for(uint8_t i=0; i<len; i++) {
        sum += data[i];
    }
    return sum;
}


CAN_MSG_OBJ get_TM2BMS_Broadcast_msg(int8_t temps_array[]) {
    CAN_MSG_OBJ msg;
    
    //calculate data
    int8_t min_temp = 127;
    uint8_t min_temp_i = 0; 
    int8_t max_temp = -128;
    uint8_t max_temp_i = 0;
    
    int8_t total_temp = 0;
    for(uint8_t temp_i=0; temp_i<THERM_COUNT; temp_i++) {
        int8_t this_temp = temps_array[temp_i];
        if(this_temp < min_temp)
        {
            min_temp = this_temp;
            min_temp_i = temp_i;
        }
        if(this_temp > max_temp)
        {
            max_temp = this_temp;
            max_temp_i = temp_i;
        }
        total_temp += this_temp;
    }
    
    int8_t avg_temp = total_temp / THERM_COUNT;
    
    uint8_t data_array[8] = {MODULE_ID, (uint8_t)min_temp, (uint8_t)max_temp, 
                            (uint8_t)avg_temp, THERM_COUNT, 
                             max_temp_i, min_temp_i, 0};
    
    // checksum has magic offset
    data_array[7] = get_checksum((uint8_t*)data_array, 7) + 0x41;
    
    // assemble packet
    msg.msgId = 0x1838F380 | MODULE_ID;
    msg.field.formatType = CAN_2_0_FORMAT;
    msg.field.brs = CAN_NON_BRS_MODE;
    msg.field.dlc = DLC_8;
    msg.field.frameType = CAN_FRAME_DATA;
    msg.field.idType = CAN_FRAME_EXT;
    msg.data = data_array;
    
    return msg;
}


CAN_MSG_OBJ get_TM_General_Broadcast_msg(int8_t temps_array[]) {
    static uint8_t broadcast_therm_i;
    
    CAN_MSG_OBJ msg;
    
    //calculate data
    int8_t min_temp = 127;
    uint8_t min_temp_i = 0; 
    int8_t max_temp = -128;
    uint8_t max_temp_i = 0;
    
    int8_t total_temp = 0;
    for(uint8_t temp_i=0; temp_i<THERM_COUNT; temp_i++) {
        int8_t this_temp = temps_array[temp_i];
        if(this_temp < min_temp)
        {
            min_temp = this_temp;
            min_temp_i = temp_i;
        }
        if(this_temp > max_temp)
        {
            max_temp = this_temp;
            max_temp_i = temp_i;
        }
        total_temp += this_temp;
    }
    
    uint16_t absolute_therm_id = 80 * MODULE_ID + broadcast_therm_i;
    uint8_t broadcast_therm_temp = temps_array[broadcast_therm_i];
    
    uint8_t data_array[8] = {absolute_therm_id, broadcast_therm_temp, 
                            THERM_COUNT, 
                            min_temp, max_temp, 
                            max_temp_i, min_temp_i};
    
    // assemble packet
    msg.msgId = 0x1838F380 | MODULE_ID;
    msg.field.formatType = CAN_2_0_FORMAT;
    msg.field.brs = CAN_NON_BRS_MODE;
    msg.field.dlc = DLC_8;
    msg.field.frameType = CAN_FRAME_DATA;
    msg.field.idType = CAN_FRAME_EXT;
    msg.data = data_array;
    
    
    // increment broadcast_therm_i
    if(++broadcast_therm_i > THERM_COUNT) {
        broadcast_therm_i = 0;
    }
    
    return msg;
}
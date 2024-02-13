/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F47Q84
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "config.h"
#include "can_msgs.h"

int8_t adc_to_temp(adc_result_t reading) 
{
	// TODO : thermistor curve here
	return (uint8_t)(reading>>8);
}


int8_t temps[THERM_COUNT];

void main(void)
{

    CAN_MSG_OBJ msg;
    
    // initialise the device
    SYSTEM_Initialize();
	ADC_SelectContext(CONTEXT_1);

    while (1)
    {   
        //read temps
		for (uint8_t therm_i = MIN_THERM_ID; therm_i < MAX_THERM_ID; therm_i++)
		{
			ADC_StartConversion((ADC_channel_t)therm_i);
			while(!ADC_IsConversionDone());
			adc_result_t reading = ADC_GetConversionResult();
			temps[therm_i-MIN_THERM_ID] = adc_to_temp(reading);
		}

        // set up can interface
		switch (CAN1_OperationModeGet())
		{
		case CAN_CONFIGURATION_MODE:
			CAN1_OperationModeSet(CAN_NORMAL_2_0_MODE);
			break;
		case CAN_NORMAL_2_0_MODE:
			// transmit data
		    if(CAN_TX_FIFO_AVAILABLE == (CAN1_TransmitFIFOStatusGet(CAN1_TX_TXQ)))
		    {
				// broadcast msg
				msg = get_TM2BMS_Broadcast_msg(temps);
				CAN1_Transmit(CAN1_TX_TXQ, &msg);
				while(CAN1_TransmitFIFOStatusGet(CAN1_TX_TXQ) == CAN_TX_FIFO_FULL);

				// general broadcast msg
				msg = get_TM_General_Broadcast_msg(temps);
				CAN1_Transmit(CAN1_TX_TXQ, &msg);
				while (CAN1_TransmitFIFOStatusGet(CAN1_TX_TXQ) == CAN_TX_FIFO_FULL);
		    }
			break;
		default:
			break;
		}
		__delay_ms(LOOP_PERIOD);
    }
}
/**
 End of File
*/
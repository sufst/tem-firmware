/**
  CAN1 Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    can1.c

  @Summary
    This is the generated driver implementation file for the CAN1 driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides implementations for driver APIs for CAN1.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F47Q84
        Driver Version    :  1.1.1
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above or later
        MPLAB             :  MPLAB X 6.00
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

#include <xc.h>
#include <stdint.h>
#include <string.h>
#include "can1.h"


#define SID_LOW_WIDTH                   (8U)
#define SID_HIGH_MASK                   (0x07U)
#define EID_LOW_WIDTH                   (5U)
#define EID_LOW_POSN                    (3U)
#define EID_LOW_MASK                    (0xF8U)
#define EID_MID_WIDTH                   (8U)
#define EID_HIGH_WIDTH                  (5U)
#define EID_HIGH_MASK                   (0x1FU)
#define IDE_POSN                        (4U)
#define RTR_POSN                        (5U)
#define BRS_POSN                        (6U)
#define FDF_POSN                        (7U)

#define DLCToPayloadBytes(x)            (DLC_BYTES[(x)])
#define PLSIZEToPayloadBytes(x)         (DLCToPayloadBytes(8u + (x)))

struct CAN_FIFOREG
{
    uint8_t CONL;
    uint8_t CONH;
    uint8_t CONU;
    uint8_t CONT;
    uint8_t STAL;
    uint8_t STAH;
    uint8_t STAU;
    uint8_t STAT;
    uint32_t UA;
};

static volatile struct CAN_FIFOREG * const FIFO = (struct CAN_FIFOREG *)&C1TXQCONL;
static const uint8_t DLC_BYTES[] = {0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U};

static void (*CAN1_InvalidMessageHandler)(void);
static void (*CAN1_BusWakeUpActivityHandler)(void);
static void (*CAN1_BusErrorHandler)(void);
static void (*CAN1_ModeChangeHandler)(void);
static void (*CAN1_SystemErrorHandler)(void);
static void (*CAN1_TxAttemptHandler)(void);

static void DefaultInvalidMessageHandler(void)
{
}

static void DefaultBusWakeUpActivityHandler(void)
{
}

static void DefaultBusErrorHandler(void)
{
}

static void DefaultModeChangeHandler(void)
{
}

static void DefaultSystemErrorHandler(void)
{
}

static void DefaultTxAttemptHandler(void)
{
}


static void CAN1_TX_FIFO_Configuration(void)
{
    // TXATIE enabled; TXQEIE disabled; TXQNIE disabled; 
    C1TXQCONL = 0x10;
    
    // FRESET enabled; UINC disabled; 
    C1TXQCONH = 0x04;
    
    // TXAT 3; TXPRI 1; 
    C1TXQCONU = 0x60;
    
    // PLSIZE 8; FSIZE 2; 
    C1TXQCONT = 0x01;
    
    // TXEN enabled; RTREN disabled; RXTSEN disabled; TXATIE enabled; RXOVIE disabled; TFERFFIE disabled; TFHRFHIE disabled; TFNRFNIE disabled; 
    C1FIFOCON1L = 0x90;
    
    // FRESET enabled; TXREQ disabled; UINC disabled; 
    C1FIFOCON1H = 0x04;
    
    // TXAT Unlimited number of retransmission attempts; TXPRI 1; 
    C1FIFOCON1U = 0x60;
    
    // PLSIZE 8; FSIZE 6; 
    C1FIFOCON1T = 0x05;
    
}

static void CAN1_BitRateConfiguration(void)
{
    // SJW 1; 
    C1NBTCFGL = 0x01;
    
    // TSEG2 1; 
    C1NBTCFGH = 0x01;
    
    // TSEG1 4; 
    C1NBTCFGU = 0x04;
    
    // BRP 0; 
    C1NBTCFGT = 0x00;
    
}

static void CAN1_ErrorNotificationInterruptEnable(void)
{
    CAN1_SetInvalidMessageInterruptHandler(DefaultInvalidMessageHandler);
    CAN1_SetBusWakeUpActivityInterruptHandler(DefaultBusWakeUpActivityHandler);
    CAN1_SetBusErrorInterruptHandler(DefaultBusErrorHandler);
    CAN1_SetModeChangeInterruptHandler(DefaultModeChangeHandler);
    CAN1_SetSystemErrorInterruptHandler(DefaultSystemErrorHandler);
    CAN1_SetTxAttemptInterruptHandler(DefaultTxAttemptHandler);
    PIR0bits.CANIF = 0;
    
    // MODIF disabled; TBCIF disabled; 
    C1INTL = 0x00;
    
    // IVMIF disabled; WAKIF disabled; CERRIF disabled; SERRIF disabled; 
    C1INTH = 0x00;
    
    // TEFIE disabled; MODIE enabled; TBCIE disabled; RXIE disabled; TXIE disabled; 
    C1INTU = 0x08;
    
    // IVMIE enabled; WAKIE enabled; CERRIE enabled; SERRIE enabled; RXOVIE enabled; TXATIE enabled; 
    C1INTT = 0xFC;
    
    PIE0bits.CANIE = 1;
}

void CAN1_Initialize(void)
{
    /* Enable the CAN module */
    C1CONHbits.ON = 1;
    
    if (CAN_OP_MODE_REQUEST_SUCCESS == CAN1_OperationModeSet(CAN_CONFIGURATION_MODE))
    {
        /* Initialize the C1FIFOBA with the start address of the CAN FIFO message object area. */
        C1FIFOBA = 0x3800;
        
        // CLKSEL0 disabled; PXEDIS enabled; ISOCRCEN enabled; DNCNT 0; 
        C1CONL = 0x60;

        // ON enabled; FRZ disabled; SIDL disabled; BRSDIS enabled; WFT T11 Filter; WAKFIL enabled; 
        C1CONH = 0x97;

        // TXQEN enabled; STEF disabled; SERR2LOM disabled; ESIGM disabled; RTXAT disabled; 
        C1CONU = 0x10;

        CAN1_BitRateConfiguration();
        CAN1_TX_FIFO_Configuration();
        CAN1_ErrorNotificationInterruptEnable();
        CAN1_OperationModeSet(CAN_NORMAL_2_0_MODE);    
    }
}

CAN_OP_MODE_STATUS CAN1_OperationModeSet(const CAN_OP_MODES requestMode)
{
    CAN_OP_MODE_STATUS status = CAN_OP_MODE_REQUEST_SUCCESS;
    CAN_OP_MODES opMode = CAN1_OperationModeGet();

    if (CAN_CONFIGURATION_MODE == opMode
            || CAN_DISABLE_MODE == requestMode
            || CAN_CONFIGURATION_MODE == requestMode)
    {
        C1CONTbits.REQOP = requestMode;
        
        while (C1CONUbits.OPMOD != requestMode)
        {
            //This condition is avoiding the system error case endless loop
            if (1 == C1INTHbits.SERRIF)
            {
                status = CAN_OP_MODE_SYS_ERROR_OCCURED;
                break;
            }
        }
    }
    else
    {
        status = CAN_OP_MODE_REQUEST_FAIL;
    }

    return status;
}

CAN_OP_MODES CAN1_OperationModeGet(void)
{
    return C1CONUbits.OPMOD;
}


static bool isTxChannel(uint8_t channel) 
{
    return channel < 4u && (FIFO[channel].CONL & _C1FIFOCON1L_TXEN_MASK);
}

static CAN_TX_FIFO_STATUS GetTxFifoStatus(uint8_t validChannel)
{
    return (FIFO[validChannel].STAL & _C1FIFOSTA1L_TFNRFNIF_MASK);
}

static void WriteMessageToFifo(uint8_t *txFifoObj, CAN_MSG_OBJ *txCanMsg)
{
    uint32_t msgId = txCanMsg->msgId;
    uint8_t status;
    const uint8_t payloadOffsetBytes =
              4U    // ID
            + 1U    // FDF, BRS, RTR, ...
            + 1U    // SEQ[6:0], ESI
            + 2U;   // SEQ
    
    if (CAN_FRAME_EXT == txCanMsg->field.idType)
    {
        txFifoObj[1] = (msgId << EID_LOW_POSN) & EID_LOW_MASK;
        msgId >>= EID_LOW_WIDTH;
        txFifoObj[2] = msgId;
        msgId >>= EID_MID_WIDTH;
        txFifoObj[3] = (msgId & EID_HIGH_MASK);
        msgId >>= EID_HIGH_WIDTH;
    }
    else
    {
        txFifoObj[1] = txFifoObj[2] = txFifoObj[3] = 0;
    }
    
    txFifoObj[0] = msgId;
    msgId >>= SID_LOW_WIDTH;
    txFifoObj[1] |= (msgId & SID_HIGH_MASK);
    
    status = txCanMsg->field.dlc;
    status |= (txCanMsg->field.idType << IDE_POSN);
    status |= (txCanMsg->field.frameType << RTR_POSN);
    status |= (txCanMsg->field.brs << BRS_POSN);
    status |= (txCanMsg->field.formatType << FDF_POSN);
    txFifoObj[4] = status;

    if (CAN_FRAME_DATA == txCanMsg->field.frameType)
    {
        memcpy(txFifoObj + payloadOffsetBytes, txCanMsg->data, DLCToPayloadBytes(txCanMsg->field.dlc));
    }
}

static CAN_TX_MSG_REQUEST_STATUS ValidateTransmission(uint8_t validChannel, CAN_MSG_OBJ *txCanMsg)
{
    CAN_TX_MSG_REQUEST_STATUS txMsgStatus = CAN_TX_MSG_REQUEST_SUCCESS;
    CAN_MSG_FIELD field = txCanMsg->field;
    uint8_t plsize = 0;
    
    if (CAN_BRS_MODE == field.brs && (CAN_NORMAL_2_0_MODE == CAN1_OperationModeGet()))
    {
        txMsgStatus |= CAN_TX_MSG_REQUEST_BRS_ERROR;
    }
    
    if (field.dlc > DLC_8 && (CAN_2_0_FORMAT == field.formatType || CAN_NORMAL_2_0_MODE == CAN1_OperationModeGet()))
    {
        txMsgStatus |= CAN_TX_MSG_REQUEST_DLC_EXCEED_ERROR;
    }
    
    if (DLCToPayloadBytes(field.dlc) > PLSIZEToPayloadBytes(plsize))
    {
        txMsgStatus |= CAN_TX_MSG_REQUEST_DLC_EXCEED_ERROR;
    }
    
    if (CAN_TX_FIFO_FULL == GetTxFifoStatus(validChannel))
    {
        txMsgStatus |= CAN_TX_MSG_REQUEST_FIFO_FULL;
    }
    
    return txMsgStatus;
}

CAN_TX_MSG_REQUEST_STATUS CAN1_Transmit(const CAN1_TX_FIFO_CHANNELS fifoChannel, CAN_MSG_OBJ *txCanMsg)
{
    CAN_TX_MSG_REQUEST_STATUS status = CAN_TX_MSG_REQUEST_FIFO_FULL;
    
    if (isTxChannel(fifoChannel))
    {
        status = ValidateTransmission(fifoChannel, txCanMsg);
        if (CAN_TX_MSG_REQUEST_SUCCESS == status)
        {
            uint8_t *txFifoObj = (uint8_t *) FIFO[fifoChannel].UA;
            
            if (txFifoObj != NULL)
            {
                WriteMessageToFifo(txFifoObj, txCanMsg);
                FIFO[fifoChannel].CONH |= (_C1FIFOCON1H_TXREQ_MASK | _C1FIFOCON1H_UINC_MASK);
            }
        }
    }
    
    return status;
}

CAN_TX_FIFO_STATUS CAN1_TransmitFIFOStatusGet(const CAN1_TX_FIFO_CHANNELS fifoChannel)
{
    CAN_TX_FIFO_STATUS status = CAN_TX_FIFO_FULL;
    
    if (isTxChannel(fifoChannel)) 
    {
        status = GetTxFifoStatus(fifoChannel);
    }
    
    return status;
}

bool CAN1_IsBusOff(void)
{
    return C1TRECUbits.TXBO;
}

bool CAN1_IsRxErrorPassive(void)
{
    return C1TRECUbits.RXBP;
}

bool CAN1_IsRxErrorWarning(void)
{
    return C1TRECUbits.RXWARN;
}

bool CAN1_IsRxErrorActive(void)
{
    return !CAN1_IsRxErrorPassive();
}

bool CAN1_IsTxErrorPassive(void)
{
    return C1TRECUbits.TXBP;
}

bool CAN1_IsTxErrorWarning(void)
{
    return C1TRECUbits.TXWARN;
}

bool CAN1_IsTxErrorActive(void)
{
    return !CAN1_IsTxErrorPassive();
}

void CAN1_Sleep(void)
{
    C1INTHbits.WAKIF = 0;
    C1INTTbits.WAKIE = 1;
    
    CAN1_OperationModeSet(CAN_DISABLE_MODE);
}

void CAN1_SetInvalidMessageInterruptHandler(void (*handler)(void))
{
    CAN1_InvalidMessageHandler = handler;
}

void CAN1_SetBusWakeUpActivityInterruptHandler(void (*handler)(void))
{
    CAN1_BusWakeUpActivityHandler = handler;
}

void CAN1_SetBusErrorInterruptHandler(void (*handler)(void))
{
    CAN1_BusErrorHandler = handler;
}

void CAN1_SetModeChangeInterruptHandler(void (*handler)(void))
{
    CAN1_ModeChangeHandler = handler;
}

void CAN1_SetSystemErrorInterruptHandler(void (*handler)(void))
{
    CAN1_SystemErrorHandler = handler;
}

void CAN1_SetTxAttemptInterruptHandler(void (*handler)(void))
{
    CAN1_TxAttemptHandler = handler;
}

void CAN1_ISR(void)
{
    if (1 == C1INTHbits.IVMIF)
    {
        CAN1_InvalidMessageHandler();
        C1INTHbits.IVMIF = 0;
    }
    
    if (1 == C1INTHbits.WAKIF)
    {
        CAN1_BusWakeUpActivityHandler();
        C1INTHbits.WAKIF = 0;
    }
    
    if (1 == C1INTHbits.CERRIF)
    {
        CAN1_BusErrorHandler();
        C1INTHbits.CERRIF = 0;
    }
    
    if (1 == C1INTLbits.MODIF)
    {
        CAN1_ModeChangeHandler();
        C1INTLbits.MODIF = 0;
    }
    
    if (1 == C1INTHbits.SERRIF)
    {
        CAN1_SystemErrorHandler();
        C1INTHbits.SERRIF = 0;
    }
    
    if (1 == C1INTHbits.TXATIF)
    {
        CAN1_TxAttemptHandler();
        if (1 == C1TXQSTALbits.TXATIF)
        {
            C1TXQSTALbits.TXATIF = 0;
        }
        if (1 == C1FIFOSTA1Lbits.TXATIF)
        {
            C1FIFOSTA1Lbits.TXATIF = 0;
        }
    }
    
    PIR0bits.CANIF = 0;
}




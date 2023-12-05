/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F47Q84
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set Therm1_0 aliases
#define Therm1_0_TRIS                 TRISAbits.TRISA0
#define Therm1_0_LAT                  LATAbits.LATA0
#define Therm1_0_PORT                 PORTAbits.RA0
#define Therm1_0_WPU                  WPUAbits.WPUA0
#define Therm1_0_OD                   ODCONAbits.ODCA0
#define Therm1_0_ANS                  ANSELAbits.ANSELA0
#define Therm1_0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define Therm1_0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define Therm1_0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define Therm1_0_GetValue()           PORTAbits.RA0
#define Therm1_0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define Therm1_0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define Therm1_0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define Therm1_0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define Therm1_0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define Therm1_0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define Therm1_0_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define Therm1_0_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set Therm1_1 aliases
#define Therm1_1_TRIS                 TRISAbits.TRISA1
#define Therm1_1_LAT                  LATAbits.LATA1
#define Therm1_1_PORT                 PORTAbits.RA1
#define Therm1_1_WPU                  WPUAbits.WPUA1
#define Therm1_1_OD                   ODCONAbits.ODCA1
#define Therm1_1_ANS                  ANSELAbits.ANSELA1
#define Therm1_1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define Therm1_1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define Therm1_1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define Therm1_1_GetValue()           PORTAbits.RA1
#define Therm1_1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define Therm1_1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define Therm1_1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define Therm1_1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define Therm1_1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define Therm1_1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define Therm1_1_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define Therm1_1_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set Therm1_2 aliases
#define Therm1_2_TRIS                 TRISAbits.TRISA2
#define Therm1_2_LAT                  LATAbits.LATA2
#define Therm1_2_PORT                 PORTAbits.RA2
#define Therm1_2_WPU                  WPUAbits.WPUA2
#define Therm1_2_OD                   ODCONAbits.ODCA2
#define Therm1_2_ANS                  ANSELAbits.ANSELA2
#define Therm1_2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define Therm1_2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define Therm1_2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define Therm1_2_GetValue()           PORTAbits.RA2
#define Therm1_2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define Therm1_2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define Therm1_2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define Therm1_2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define Therm1_2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define Therm1_2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define Therm1_2_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define Therm1_2_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set Therm1_3 aliases
#define Therm1_3_TRIS                 TRISAbits.TRISA3
#define Therm1_3_LAT                  LATAbits.LATA3
#define Therm1_3_PORT                 PORTAbits.RA3
#define Therm1_3_WPU                  WPUAbits.WPUA3
#define Therm1_3_OD                   ODCONAbits.ODCA3
#define Therm1_3_ANS                  ANSELAbits.ANSELA3
#define Therm1_3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define Therm1_3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define Therm1_3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define Therm1_3_GetValue()           PORTAbits.RA3
#define Therm1_3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define Therm1_3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define Therm1_3_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define Therm1_3_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define Therm1_3_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define Therm1_3_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define Therm1_3_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define Therm1_3_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set Therm1_4 aliases
#define Therm1_4_TRIS                 TRISAbits.TRISA4
#define Therm1_4_LAT                  LATAbits.LATA4
#define Therm1_4_PORT                 PORTAbits.RA4
#define Therm1_4_WPU                  WPUAbits.WPUA4
#define Therm1_4_OD                   ODCONAbits.ODCA4
#define Therm1_4_ANS                  ANSELAbits.ANSELA4
#define Therm1_4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define Therm1_4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define Therm1_4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define Therm1_4_GetValue()           PORTAbits.RA4
#define Therm1_4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define Therm1_4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define Therm1_4_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define Therm1_4_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define Therm1_4_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define Therm1_4_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define Therm1_4_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define Therm1_4_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set Therm1_5 aliases
#define Therm1_5_TRIS                 TRISAbits.TRISA5
#define Therm1_5_LAT                  LATAbits.LATA5
#define Therm1_5_PORT                 PORTAbits.RA5
#define Therm1_5_WPU                  WPUAbits.WPUA5
#define Therm1_5_OD                   ODCONAbits.ODCA5
#define Therm1_5_ANS                  ANSELAbits.ANSELA5
#define Therm1_5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define Therm1_5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define Therm1_5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define Therm1_5_GetValue()           PORTAbits.RA5
#define Therm1_5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define Therm1_5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define Therm1_5_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define Therm1_5_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define Therm1_5_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define Therm1_5_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define Therm1_5_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define Therm1_5_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set Therm2_0 aliases
#define Therm2_0_TRIS                 TRISBbits.TRISB0
#define Therm2_0_LAT                  LATBbits.LATB0
#define Therm2_0_PORT                 PORTBbits.RB0
#define Therm2_0_WPU                  WPUBbits.WPUB0
#define Therm2_0_OD                   ODCONBbits.ODCB0
#define Therm2_0_ANS                  ANSELBbits.ANSELB0
#define Therm2_0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define Therm2_0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define Therm2_0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define Therm2_0_GetValue()           PORTBbits.RB0
#define Therm2_0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define Therm2_0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define Therm2_0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define Therm2_0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define Therm2_0_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define Therm2_0_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define Therm2_0_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define Therm2_0_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set Therm2_1 aliases
#define Therm2_1_TRIS                 TRISBbits.TRISB1
#define Therm2_1_LAT                  LATBbits.LATB1
#define Therm2_1_PORT                 PORTBbits.RB1
#define Therm2_1_WPU                  WPUBbits.WPUB1
#define Therm2_1_OD                   ODCONBbits.ODCB1
#define Therm2_1_ANS                  ANSELBbits.ANSELB1
#define Therm2_1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define Therm2_1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define Therm2_1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define Therm2_1_GetValue()           PORTBbits.RB1
#define Therm2_1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define Therm2_1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define Therm2_1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define Therm2_1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define Therm2_1_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define Therm2_1_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define Therm2_1_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define Therm2_1_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set Therm2_2 aliases
#define Therm2_2_TRIS                 TRISBbits.TRISB2
#define Therm2_2_LAT                  LATBbits.LATB2
#define Therm2_2_PORT                 PORTBbits.RB2
#define Therm2_2_WPU                  WPUBbits.WPUB2
#define Therm2_2_OD                   ODCONBbits.ODCB2
#define Therm2_2_ANS                  ANSELBbits.ANSELB2
#define Therm2_2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define Therm2_2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define Therm2_2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define Therm2_2_GetValue()           PORTBbits.RB2
#define Therm2_2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define Therm2_2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define Therm2_2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define Therm2_2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define Therm2_2_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define Therm2_2_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define Therm2_2_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define Therm2_2_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set Therm2_3 aliases
#define Therm2_3_TRIS                 TRISBbits.TRISB3
#define Therm2_3_LAT                  LATBbits.LATB3
#define Therm2_3_PORT                 PORTBbits.RB3
#define Therm2_3_WPU                  WPUBbits.WPUB3
#define Therm2_3_OD                   ODCONBbits.ODCB3
#define Therm2_3_ANS                  ANSELBbits.ANSELB3
#define Therm2_3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define Therm2_3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define Therm2_3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define Therm2_3_GetValue()           PORTBbits.RB3
#define Therm2_3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define Therm2_3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define Therm2_3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define Therm2_3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define Therm2_3_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define Therm2_3_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define Therm2_3_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define Therm2_3_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set Therm2_4 aliases
#define Therm2_4_TRIS                 TRISBbits.TRISB4
#define Therm2_4_LAT                  LATBbits.LATB4
#define Therm2_4_PORT                 PORTBbits.RB4
#define Therm2_4_WPU                  WPUBbits.WPUB4
#define Therm2_4_OD                   ODCONBbits.ODCB4
#define Therm2_4_ANS                  ANSELBbits.ANSELB4
#define Therm2_4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define Therm2_4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define Therm2_4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define Therm2_4_GetValue()           PORTBbits.RB4
#define Therm2_4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define Therm2_4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define Therm2_4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define Therm2_4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define Therm2_4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define Therm2_4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define Therm2_4_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define Therm2_4_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set Therm2_5 aliases
#define Therm2_5_TRIS                 TRISBbits.TRISB5
#define Therm2_5_LAT                  LATBbits.LATB5
#define Therm2_5_PORT                 PORTBbits.RB5
#define Therm2_5_WPU                  WPUBbits.WPUB5
#define Therm2_5_OD                   ODCONBbits.ODCB5
#define Therm2_5_ANS                  ANSELBbits.ANSELB5
#define Therm2_5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define Therm2_5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define Therm2_5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define Therm2_5_GetValue()           PORTBbits.RB5
#define Therm2_5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define Therm2_5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define Therm2_5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define Therm2_5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define Therm2_5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define Therm2_5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define Therm2_5_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define Therm2_5_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set Therm3_0 aliases
#define Therm3_0_TRIS                 TRISCbits.TRISC0
#define Therm3_0_LAT                  LATCbits.LATC0
#define Therm3_0_PORT                 PORTCbits.RC0
#define Therm3_0_WPU                  WPUCbits.WPUC0
#define Therm3_0_OD                   ODCONCbits.ODCC0
#define Therm3_0_ANS                  ANSELCbits.ANSELC0
#define Therm3_0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define Therm3_0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define Therm3_0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define Therm3_0_GetValue()           PORTCbits.RC0
#define Therm3_0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define Therm3_0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define Therm3_0_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define Therm3_0_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define Therm3_0_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define Therm3_0_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define Therm3_0_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define Therm3_0_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set Therm3_1 aliases
#define Therm3_1_TRIS                 TRISCbits.TRISC1
#define Therm3_1_LAT                  LATCbits.LATC1
#define Therm3_1_PORT                 PORTCbits.RC1
#define Therm3_1_WPU                  WPUCbits.WPUC1
#define Therm3_1_OD                   ODCONCbits.ODCC1
#define Therm3_1_ANS                  ANSELCbits.ANSELC1
#define Therm3_1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define Therm3_1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define Therm3_1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define Therm3_1_GetValue()           PORTCbits.RC1
#define Therm3_1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define Therm3_1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define Therm3_1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define Therm3_1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define Therm3_1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define Therm3_1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define Therm3_1_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define Therm3_1_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set Therm3_2 aliases
#define Therm3_2_TRIS                 TRISCbits.TRISC2
#define Therm3_2_LAT                  LATCbits.LATC2
#define Therm3_2_PORT                 PORTCbits.RC2
#define Therm3_2_WPU                  WPUCbits.WPUC2
#define Therm3_2_OD                   ODCONCbits.ODCC2
#define Therm3_2_ANS                  ANSELCbits.ANSELC2
#define Therm3_2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define Therm3_2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define Therm3_2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define Therm3_2_GetValue()           PORTCbits.RC2
#define Therm3_2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define Therm3_2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define Therm3_2_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define Therm3_2_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define Therm3_2_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define Therm3_2_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define Therm3_2_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define Therm3_2_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set Therm3_3 aliases
#define Therm3_3_TRIS                 TRISCbits.TRISC3
#define Therm3_3_LAT                  LATCbits.LATC3
#define Therm3_3_PORT                 PORTCbits.RC3
#define Therm3_3_WPU                  WPUCbits.WPUC3
#define Therm3_3_OD                   ODCONCbits.ODCC3
#define Therm3_3_ANS                  ANSELCbits.ANSELC3
#define Therm3_3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define Therm3_3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define Therm3_3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define Therm3_3_GetValue()           PORTCbits.RC3
#define Therm3_3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define Therm3_3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define Therm3_3_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define Therm3_3_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define Therm3_3_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define Therm3_3_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define Therm3_3_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define Therm3_3_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set Therm3_4 aliases
#define Therm3_4_TRIS                 TRISCbits.TRISC4
#define Therm3_4_LAT                  LATCbits.LATC4
#define Therm3_4_PORT                 PORTCbits.RC4
#define Therm3_4_WPU                  WPUCbits.WPUC4
#define Therm3_4_OD                   ODCONCbits.ODCC4
#define Therm3_4_ANS                  ANSELCbits.ANSELC4
#define Therm3_4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define Therm3_4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define Therm3_4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define Therm3_4_GetValue()           PORTCbits.RC4
#define Therm3_4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define Therm3_4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define Therm3_4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define Therm3_4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define Therm3_4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define Therm3_4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define Therm3_4_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define Therm3_4_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set Therm3_5 aliases
#define Therm3_5_TRIS                 TRISCbits.TRISC5
#define Therm3_5_LAT                  LATCbits.LATC5
#define Therm3_5_PORT                 PORTCbits.RC5
#define Therm3_5_WPU                  WPUCbits.WPUC5
#define Therm3_5_OD                   ODCONCbits.ODCC5
#define Therm3_5_ANS                  ANSELCbits.ANSELC5
#define Therm3_5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define Therm3_5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define Therm3_5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define Therm3_5_GetValue()           PORTCbits.RC5
#define Therm3_5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define Therm3_5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define Therm3_5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define Therm3_5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define Therm3_5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define Therm3_5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define Therm3_5_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define Therm3_5_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set Therm3_6 aliases
#define Therm3_6_TRIS                 TRISCbits.TRISC6
#define Therm3_6_LAT                  LATCbits.LATC6
#define Therm3_6_PORT                 PORTCbits.RC6
#define Therm3_6_WPU                  WPUCbits.WPUC6
#define Therm3_6_OD                   ODCONCbits.ODCC6
#define Therm3_6_ANS                  ANSELCbits.ANSELC6
#define Therm3_6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define Therm3_6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define Therm3_6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define Therm3_6_GetValue()           PORTCbits.RC6
#define Therm3_6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define Therm3_6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define Therm3_6_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define Therm3_6_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define Therm3_6_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define Therm3_6_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define Therm3_6_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define Therm3_6_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set Therm3_7 aliases
#define Therm3_7_TRIS                 TRISCbits.TRISC7
#define Therm3_7_LAT                  LATCbits.LATC7
#define Therm3_7_PORT                 PORTCbits.RC7
#define Therm3_7_WPU                  WPUCbits.WPUC7
#define Therm3_7_OD                   ODCONCbits.ODCC7
#define Therm3_7_ANS                  ANSELCbits.ANSELC7
#define Therm3_7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define Therm3_7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define Therm3_7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define Therm3_7_GetValue()           PORTCbits.RC7
#define Therm3_7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define Therm3_7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define Therm3_7_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define Therm3_7_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define Therm3_7_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define Therm3_7_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define Therm3_7_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define Therm3_7_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set RD0 procedures
#define RD0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define RD0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define RD0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define RD0_GetValue()              PORTDbits.RD0
#define RD0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define RD0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define RD0_SetPullup()             do { WPUDbits.WPUD0 = 1; } while(0)
#define RD0_ResetPullup()           do { WPUDbits.WPUD0 = 0; } while(0)
#define RD0_SetAnalogMode()         do { ANSELDbits.ANSELD0 = 1; } while(0)
#define RD0_SetDigitalMode()        do { ANSELDbits.ANSELD0 = 0; } while(0)

// get/set RD1 procedures
#define RD1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define RD1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define RD1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define RD1_GetValue()              PORTDbits.RD1
#define RD1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define RD1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define RD1_SetPullup()             do { WPUDbits.WPUD1 = 1; } while(0)
#define RD1_ResetPullup()           do { WPUDbits.WPUD1 = 0; } while(0)
#define RD1_SetAnalogMode()         do { ANSELDbits.ANSELD1 = 1; } while(0)
#define RD1_SetDigitalMode()        do { ANSELDbits.ANSELD1 = 0; } while(0)

// get/set CFG_R30 aliases
#define CFG_R30_TRIS                 TRISDbits.TRISD2
#define CFG_R30_LAT                  LATDbits.LATD2
#define CFG_R30_PORT                 PORTDbits.RD2
#define CFG_R30_WPU                  WPUDbits.WPUD2
#define CFG_R30_OD                   ODCONDbits.ODCD2
#define CFG_R30_ANS                  ANSELDbits.ANSELD2
#define CFG_R30_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define CFG_R30_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define CFG_R30_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define CFG_R30_GetValue()           PORTDbits.RD2
#define CFG_R30_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define CFG_R30_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define CFG_R30_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define CFG_R30_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define CFG_R30_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define CFG_R30_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define CFG_R30_SetAnalogMode()      do { ANSELDbits.ANSELD2 = 1; } while(0)
#define CFG_R30_SetDigitalMode()     do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set CFG_R31 aliases
#define CFG_R31_TRIS                 TRISDbits.TRISD3
#define CFG_R31_LAT                  LATDbits.LATD3
#define CFG_R31_PORT                 PORTDbits.RD3
#define CFG_R31_WPU                  WPUDbits.WPUD3
#define CFG_R31_OD                   ODCONDbits.ODCD3
#define CFG_R31_ANS                  ANSELDbits.ANSELD3
#define CFG_R31_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define CFG_R31_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define CFG_R31_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define CFG_R31_GetValue()           PORTDbits.RD3
#define CFG_R31_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define CFG_R31_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define CFG_R31_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define CFG_R31_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define CFG_R31_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define CFG_R31_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define CFG_R31_SetAnalogMode()      do { ANSELDbits.ANSELD3 = 1; } while(0)
#define CFG_R31_SetDigitalMode()     do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set CFG_R32 aliases
#define CFG_R32_TRIS                 TRISDbits.TRISD4
#define CFG_R32_LAT                  LATDbits.LATD4
#define CFG_R32_PORT                 PORTDbits.RD4
#define CFG_R32_WPU                  WPUDbits.WPUD4
#define CFG_R32_OD                   ODCONDbits.ODCD4
#define CFG_R32_ANS                  ANSELDbits.ANSELD4
#define CFG_R32_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define CFG_R32_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define CFG_R32_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define CFG_R32_GetValue()           PORTDbits.RD4
#define CFG_R32_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define CFG_R32_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define CFG_R32_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define CFG_R32_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define CFG_R32_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define CFG_R32_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define CFG_R32_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define CFG_R32_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)

// get/set CFG_R33 aliases
#define CFG_R33_TRIS                 TRISDbits.TRISD5
#define CFG_R33_LAT                  LATDbits.LATD5
#define CFG_R33_PORT                 PORTDbits.RD5
#define CFG_R33_WPU                  WPUDbits.WPUD5
#define CFG_R33_OD                   ODCONDbits.ODCD5
#define CFG_R33_ANS                  ANSELDbits.ANSELD5
#define CFG_R33_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define CFG_R33_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define CFG_R33_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define CFG_R33_GetValue()           PORTDbits.RD5
#define CFG_R33_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define CFG_R33_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define CFG_R33_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define CFG_R33_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define CFG_R33_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define CFG_R33_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define CFG_R33_SetAnalogMode()      do { ANSELDbits.ANSELD5 = 1; } while(0)
#define CFG_R33_SetDigitalMode()     do { ANSELDbits.ANSELD5 = 0; } while(0)

// get/set Therm2_6 aliases
#define Therm2_6_TRIS                 TRISDbits.TRISD6
#define Therm2_6_LAT                  LATDbits.LATD6
#define Therm2_6_PORT                 PORTDbits.RD6
#define Therm2_6_WPU                  WPUDbits.WPUD6
#define Therm2_6_OD                   ODCONDbits.ODCD6
#define Therm2_6_ANS                  ANSELDbits.ANSELD6
#define Therm2_6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define Therm2_6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define Therm2_6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define Therm2_6_GetValue()           PORTDbits.RD6
#define Therm2_6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define Therm2_6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define Therm2_6_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define Therm2_6_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define Therm2_6_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define Therm2_6_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define Therm2_6_SetAnalogMode()      do { ANSELDbits.ANSELD6 = 1; } while(0)
#define Therm2_6_SetDigitalMode()     do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set Therm2_7 aliases
#define Therm2_7_TRIS                 TRISDbits.TRISD7
#define Therm2_7_LAT                  LATDbits.LATD7
#define Therm2_7_PORT                 PORTDbits.RD7
#define Therm2_7_WPU                  WPUDbits.WPUD7
#define Therm2_7_OD                   ODCONDbits.ODCD7
#define Therm2_7_ANS                  ANSELDbits.ANSELD7
#define Therm2_7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define Therm2_7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define Therm2_7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define Therm2_7_GetValue()           PORTDbits.RD7
#define Therm2_7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define Therm2_7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define Therm2_7_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define Therm2_7_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define Therm2_7_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define Therm2_7_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define Therm2_7_SetAnalogMode()      do { ANSELDbits.ANSELD7 = 1; } while(0)
#define Therm2_7_SetDigitalMode()     do { ANSELDbits.ANSELD7 = 0; } while(0)

// get/set Therm1_6 aliases
#define Therm1_6_TRIS                 TRISEbits.TRISE0
#define Therm1_6_LAT                  LATEbits.LATE0
#define Therm1_6_PORT                 PORTEbits.RE0
#define Therm1_6_WPU                  WPUEbits.WPUE0
#define Therm1_6_OD                   ODCONEbits.ODCE0
#define Therm1_6_ANS                  ANSELEbits.ANSELE0
#define Therm1_6_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define Therm1_6_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define Therm1_6_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define Therm1_6_GetValue()           PORTEbits.RE0
#define Therm1_6_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define Therm1_6_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define Therm1_6_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define Therm1_6_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define Therm1_6_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define Therm1_6_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define Therm1_6_SetAnalogMode()      do { ANSELEbits.ANSELE0 = 1; } while(0)
#define Therm1_6_SetDigitalMode()     do { ANSELEbits.ANSELE0 = 0; } while(0)

// get/set Therm1_7 aliases
#define Therm1_7_TRIS                 TRISEbits.TRISE1
#define Therm1_7_LAT                  LATEbits.LATE1
#define Therm1_7_PORT                 PORTEbits.RE1
#define Therm1_7_WPU                  WPUEbits.WPUE1
#define Therm1_7_OD                   ODCONEbits.ODCE1
#define Therm1_7_ANS                  ANSELEbits.ANSELE1
#define Therm1_7_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define Therm1_7_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define Therm1_7_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define Therm1_7_GetValue()           PORTEbits.RE1
#define Therm1_7_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define Therm1_7_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define Therm1_7_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define Therm1_7_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define Therm1_7_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define Therm1_7_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define Therm1_7_SetAnalogMode()      do { ANSELEbits.ANSELE1 = 1; } while(0)
#define Therm1_7_SetDigitalMode()     do { ANSELEbits.ANSELE1 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/
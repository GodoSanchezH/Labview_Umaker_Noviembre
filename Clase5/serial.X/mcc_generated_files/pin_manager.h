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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F45K50
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
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

// get/set Pot1 aliases
#define Pot1_TRIS                 TRISAbits.TRISA0
#define Pot1_LAT                  LATAbits.LATA0
#define Pot1_PORT                 PORTAbits.RA0
#define Pot1_ANS                  ANSELAbits.ANSA0
#define Pot1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define Pot1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define Pot1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define Pot1_GetValue()           PORTAbits.RA0
#define Pot1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define Pot1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define Pot1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define Pot1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set Pot2 aliases
#define Pot2_TRIS                 TRISAbits.TRISA1
#define Pot2_LAT                  LATAbits.LATA1
#define Pot2_PORT                 PORTAbits.RA1
#define Pot2_ANS                  ANSELAbits.ANSA1
#define Pot2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define Pot2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define Pot2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define Pot2_GetValue()           PORTAbits.RA1
#define Pot2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define Pot2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define Pot2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define Pot2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set Led1 aliases
#define Led1_TRIS                 TRISBbits.TRISB0
#define Led1_LAT                  LATBbits.LATB0
#define Led1_PORT                 PORTBbits.RB0
#define Led1_WPU                  WPUBbits.WPUB0
#define Led1_ANS                  ANSELBbits.ANSB0
#define Led1_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define Led1_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define Led1_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define Led1_GetValue()           PORTBbits.RB0
#define Led1_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define Led1_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define Led1_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define Led1_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define Led1_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define Led1_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set Led2 aliases
#define Led2_TRIS                 TRISBbits.TRISB1
#define Led2_LAT                  LATBbits.LATB1
#define Led2_PORT                 PORTBbits.RB1
#define Led2_WPU                  WPUBbits.WPUB1
#define Led2_ANS                  ANSELBbits.ANSB1
#define Led2_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define Led2_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define Led2_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define Led2_GetValue()           PORTBbits.RB1
#define Led2_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define Led2_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define Led2_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define Led2_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define Led2_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define Led2_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set Led3 aliases
#define Led3_TRIS                 TRISBbits.TRISB2
#define Led3_LAT                  LATBbits.LATB2
#define Led3_PORT                 PORTBbits.RB2
#define Led3_WPU                  WPUBbits.WPUB2
#define Led3_ANS                  ANSELBbits.ANSB2
#define Led3_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define Led3_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define Led3_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define Led3_GetValue()           PORTBbits.RB2
#define Led3_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define Led3_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define Led3_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define Led3_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define Led3_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define Led3_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set Led4 aliases
#define Led4_TRIS                 TRISBbits.TRISB3
#define Led4_LAT                  LATBbits.LATB3
#define Led4_PORT                 PORTBbits.RB3
#define Led4_WPU                  WPUBbits.WPUB3
#define Led4_ANS                  ANSELBbits.ANSB3
#define Led4_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define Led4_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define Led4_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define Led4_GetValue()           PORTBbits.RB3
#define Led4_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define Led4_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define Led4_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define Led4_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define Led4_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define Led4_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

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
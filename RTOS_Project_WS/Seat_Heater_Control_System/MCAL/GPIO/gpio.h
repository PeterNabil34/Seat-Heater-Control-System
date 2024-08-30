/**********************************************************************************************
 *
 * Module: GPIO
 *
 * File Name: GPIO.h
 *
 * Description: Header file for the TM4C123GH6PM DIO driver for TivaC Built-in Buttons and LEDs
 *
 * Author: Peter Nabil
 *
 ***********************************************************************************************/

#ifndef GPIO_H_
#define GPIO_H_

#include "std_types.h"

#define GPIO_PORTF_PRIORITY_MASK      0xFF1FFFFF
#define GPIO_PORTF_PRIORITY_BITS_POS  21
#define GPIO_PORTF_INTERRUPT_PRIORITY 5

#define GPIO_PORTA_PRIORITY_MASK      0xFFFFFF1F
#define GPIO_PORTA_PRIORITY_BITS_POS  5
#define GPIO_PORTA_INTERRUPT_PRIORITY 5

#define PRESSED                ((uint8)0x00)
#define RELEASED               ((uint8)0x01)

void GPIO_BuiltinButtonsLedsInit(void);

void GPIO_ExternalSWInit(uint8 portID, uint8 pinID);
void GPIO_ExternalLEDInit(uint8 portID, uint8 pinID);

void GPIO_RedLedOn(void);
void GPIO_BlueLedOn(void);
void GPIO_GreenLedOn(void);

void GPIO_RedLedOff(void);
void GPIO_BlueLedOff(void);
void GPIO_GreenLedOff(void);

void GPIO_RedLedToggle(void);
void GPIO_BlueLedToggle(void);
void GPIO_GreenLedToggle(void);

uint8 GPIO_SW1GetState(void);
uint8 GPIO_SW2GetState(void);

void GPIO_SW1EdgeTriggeredInterruptInit(void);
void GPIO_SW2EdgeTriggeredInterruptInit(void);
void GPIO_ExternalSWEdgeTriggeredInterruptInit(uint8 pinID, uint8 portID);

void GPIO_DriverRedLedOn(void);
void GPIO_DriverRedLedOff(void);
void GPIO_PassengerRedLedOn(void);
void GPIO_PassengerRedLedOff(void);
void GPIO_PassengerBlueLedOn(void);
void GPIO_PassengerBlueLedOff(void);
void GPIO_PassengerGreenLedOn(void);
void GPIO_PassengerGreenLedOff(void);

#endif /* GPIO_H_ */

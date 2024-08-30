/**********************************************************************************************
 *
 * Module: ADC
 *
 * File Name: adc.h
 *
 * Description: Header file for the TM4C123GH6PM ADC driver
 *
 * Author: Peter Nabil
 *
 ***********************************************************************************************/
#ifndef ADC_H_
#define ADC_H_

#include "std_types.h"

/*******************************************************************************
 *                         Preprocessor Macros                                 *
 *******************************************************************************/
#define ADC_MAXIMUM_VALUE 4095     /* ADC maximum value */
#define ADC_REF_VOLT_VALUE (3.3)   /* Reference Voltage (in volts) */

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void ADC_Init(void);
uint16 ADC_Read(uint8 analogPin);

#endif /* ADC_H_ */

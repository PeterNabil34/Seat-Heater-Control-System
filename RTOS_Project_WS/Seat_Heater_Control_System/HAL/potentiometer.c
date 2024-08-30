/**********************************************************************************************
 *
 * HAL DRIVER: Potentiometer
 *
 * File Name: potentiometer.c
 *
 * Description: source file for the Potentiometer driver
 *
 * Author: Peter Nabil
 *
 ***********************************************************************************************/
#include"potentiometer.h"
#include"adc.h"

/* Function to convert ADC value to temperature */
uint8 LM35_getTemperature(uint8 analogPin)
{
    uint16 digitalValue = ADC_Read(analogPin);

    /* Calculate the temperature from the ADC value*/
    uint16 temperature =  (uint8)(((uint32)digitalValue*SENSOR_MAX_TEMPERATURE)/ADC_MAXIMUM_VALUE);

    return temperature;
}

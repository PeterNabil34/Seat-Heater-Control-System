/**********************************************************************************************
 *
 * HAL DRIVER: Potentiometer
 *
 * File Name: potentiometer.h
 *
 * Description: Header file for the Potentiometer driver
 *
 * Author: Peter Nabil
 *
 ***********************************************************************************************/
#ifndef POTENTIOMETER_H_
#define POTENTIOMETER_H_

#include "std_types.h"

/* Define constants */
#define SENSOR_MAX_VOLT_VALUE (3.3)  /* Potentiometer Maximum voltage (in volts) */
#define SENSOR_MAX_TEMPERATURE 45.0  /* Temperature Range (in celsius) */

/* Function to convert ADC value to temperature */
uint8 LM35_getTemperature(uint8 analogPin);



#endif /* POTENTIOMETER_H_ */

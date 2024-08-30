# Seat-Heater-Control-System

It is a system that controls the seat heater for the front two seats (driver seat and passenger seat) in a car using the TM4C123GH6PM microcontroller and FreeRTOS.\
Each seat includes:
- A button used to take the input level required to set the seat temperature.
- A temperature sensor (or potentiometer) to monitor the temperature.
- A heating element (represented by LEDs) to control the temperature based on the desired level using variable intensity power.
- A shared screen between both seats displays the current state of the system via UART.

System Features:\
1- The system consists of 6 tasks, some reused in 2 different instances.\
2- Shared resources are protected using mutexes.\
3- Event-based tasks are managed using event flags.\
4- High responsiveness to buttons is achieved through interrupts to minimize CPU load.\
5- ADC triggers an interrupt when conversion is finished.\
6- Manual Runtime Measurements is done with the following Performance Metrics:
-CPU Load: 41%
-Tasks execution time and Resource lock time per task for each resource are documented in the project documentation.

7- SimSo Simulation check to ensure that there is no task exceeded its deadline.\
\
MCAL Modules Developed and Used:\
GPIO, UART, NVIC, GPTM and ADC.\
\
Project Documentation: https://drive.google.com/file/d/10PHqsYcIHqduw4DAkD-4gidfMzhUFVXH/view?usp=drive_link

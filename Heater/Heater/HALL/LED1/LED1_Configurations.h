/*
 * LED1_Comfigurations.h
 *
 * Created: 3/21/2022 2:29:28 PM
 *  Author: g_h_a
 */ 


#ifndef LED1_COMFIGURATIONS_H_
#define LED1_COMFIGURATIONS_H_

#include "CPU_Configurations.h"
/*
#define LED1_DDR DDRC
#define LED1_PRT PORTC
#define LED1 7
*/

#define LED1_PRT DIO_PORTC
#define LED1_STATE DIO_OUTPUT

#define LED1_HIGH DIO_HIGH
#define LED1_LOW  DIO_LOW

#define LED1      DIO_PIN3

#endif /* LED1_COMFIGURATIONS_H_ */
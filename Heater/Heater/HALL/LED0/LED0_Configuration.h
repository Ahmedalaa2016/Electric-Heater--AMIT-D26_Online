/*
 * LED0_Configuration.h
 *
 * Created: 3/21/2022 1:28:17 PM
 *  Author: g_h_a
 */ 


#ifndef LED0_CONFIGURATION_H_
#define LED0_CONFIGURATION_H_

#include "CPU_Configurations.h"

/*#define LED0_DDR DDRC
#define LED0_PRT PORTC
#define LED0 2
*/

#define LED0_PRT DIO_PORTC
#define LED0_STATE DIO_OUTPUT

#define LED0_HIGH DIO_HIGH
#define	LED0_LOW  DIO_LOW

#define LED0 DIO_PIN2

#endif /* LED0_CONFIGURATION_H_ */
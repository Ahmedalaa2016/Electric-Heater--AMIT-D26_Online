/*
 * BTN0_configuration.h
 *
 * Created: 3/26/2022 2:05:40 PM
 *  Author: g_h_a
 */ 


#ifndef BTN0_CONFIGURATION_H_
#define BTN0_CONFIGURATION_H_

#include "CPU_Configurations.h"

#define BTN0_PRT   DIO_PORTB
#define BTN0       DIO_PIN0
#define BTN0_LOW   DIO_LOW
#define BTN0_HIGH  DIO_HIGH
#define BTN0_INP   DIO_INPUT

typedef enum
{
	BTN0_NPRESSED = 0,
	BTN0_PRESSED = 1
}BTN0_State;



#endif /* BTN0_CONFIGURATION_H_ */
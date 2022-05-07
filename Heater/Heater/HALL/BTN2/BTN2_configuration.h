/*
 * BTN0_configuration.h
 *
 * Created: 3/26/2022 2:05:40 PM
 *  Author: g_h_a
 */ 


#ifndef BTN2_CONFIGURATION_H_
#define BTN2_CONFIGURATION_H_

#include "CPU_Configurations.h"

#define BTN2_PRT   DIO_PORTB
#define BTN2       DIO_PIN6
#define BTN2_LOW   DIO_LOW
#define BTN2_HIGH  DIO_HIGH
#define BTN2_INP   DIO_INPUT

typedef enum
{
	BTN2_NPRESSED = 0,
	BTN2_PRESSED = 1
}BTN2_State;



#endif /* BTN0_CONFIGURATION_H_ */
/*
 * BTN1_Configuration.h
 *
 * Created: 4/3/2022 4:51:37 PM
 *  Author: g_h_a
 */ 


#ifndef BTN1_CONFIGURATION_H_
#define BTN1_CONFIGURATION_H_

#include "CPU_Configurations.h"

#define BTN1_PRT   DIO_PORTB
#define BTN1       DIO_PIN5
#define BTN1_LOW   DIO_LOW
#define BTN1_HIGH  DIO_HIGH
#define BTN1_INP   DIO_INPUT

typedef enum
{
	BTN1_NPRESSED=0,
	BTN1_PRESSED=1
}BTN1_state;



#endif /* BTN1_CONFIGURATION_H_ */
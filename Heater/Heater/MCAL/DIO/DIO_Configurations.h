/*
 * DIO_Configurations.h
 *
 * Created: 3/21/2022 4:29:53 PM
 *  Author: g_h_a
 */ 


#ifndef DIO_CONFIGURATIONS_H_
#define DIO_CONFIGURATIONS_H_

#include "CPU_Configurations.h"
#include "DIO_Adress.h"

//RENAMING FOR PORTS
typedef enum{
	DIO_PORTA=0,
	DIO_PORTB=1,
	DIO_PORTC=2,
	DIO_PORTD=3
	}port;
//RENAMING FOR PINS
typedef enum{
	 DIO_PIN0=0,
	 DIO_PIN1=1,
	 DIO_PIN2=2,
	 DIO_PIN3=3,
	 DIO_PIN4=4,
	 DIO_PIN5=5,
	 DIO_PIN6=6,
	 DIO_PIN7=7,
	}pin;
//RENAMING STATUS
typedef enum{
	 DIO_LOW=0,
	 DIO_HIGH=1
	}state;
//RENAMING DIRECTIONS
typedef enum{
	DIO_INPUT=0,
	DIO_OUTPUT=1
}direction;
//Renaming boolean
typedef enum{
	DIO_FALSE=0,
	DIO_TRUE=1
	}boolean;
#endif /* DIO_CONFIGURATIONS_H_ */
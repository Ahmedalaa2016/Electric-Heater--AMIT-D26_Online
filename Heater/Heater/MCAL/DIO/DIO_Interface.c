/*
 * DIO.c
 *
 * Created: 3/21/2022 4:28:57 PM
 *  Author: g_h_a
 */ 
#include "DIO_Private.h"

//to define direction (Input/Output)
void DIO_SetPinDirection(port Port,pin Pin,direction Direction){
	switch(Direction)
	{
		case DIO_INPUT:
		switch(Port){
			case DIO_PORTA:
			CLR_BIT(DDRA,Pin);
			break;
			case DIO_PORTB:
			CLR_BIT(DDRB,Pin);
			break;
			case DIO_PORTC:
			CLR_BIT(DDRC,Pin);
			break;
			case DIO_PORTD:
			CLR_BIT(DDRD,Pin);
			break;
		}
		break;
	    case DIO_OUTPUT:
		switch(Port){
			case DIO_PORTA:
			SET_BIT(DDRA,Pin);
			break;
			case DIO_PORTB:
			SET_BIT(DDRB,Pin);
			break;
			case DIO_PORTC:
			SET_BIT(DDRC,Pin);
			break;
			case DIO_PORTD:
			SET_BIT(DDRD,Pin);
			break;
		}
		break;
	}
}
//to define state (High/Low)
void DIO_SetPinValue(port Port,pin Pin,state State){
	switch(State)
	{
		case DIO_LOW:
		switch(Port){
			case DIO_PORTA:
			CLR_BIT(PORTA,Pin);
			break;
			case DIO_PORTB:
			CLR_BIT(PORTB,Pin);
			break;
			case DIO_PORTC:
			CLR_BIT(PORTC,Pin);
			break;
			case DIO_PORTD:
			CLR_BIT(PORTD,Pin);
			break;
		}
		break;
		case DIO_HIGH:
		switch(Port){
			case DIO_PORTA:
			SET_BIT(PORTA,Pin);
			break;
			case DIO_PORTB:
			SET_BIT(PORTB,Pin);
			break;
			case DIO_PORTC:
			SET_BIT(PORTC,Pin);
			break;
			case DIO_PORTD:
			SET_BIT(PORTD,Pin);
			break;
		}
		break;
	}
}
//to change current state of pin
void DIO_TogglePin(port Port,pin Pin){
	
		switch(Port){
			case DIO_PORTA:
			TGL_BIT(PORTA,Pin);
			break;
			case DIO_PORTB:
			TGL_BIT(PORTB,Pin);
			break;
			case DIO_PORTC:
			TGL_BIT(PORTC,Pin);
			break;
			case DIO_PORTD:
			TGL_BIT(PORTD,Pin);
			break;	
}
}

//to get pin Value(USE PORT INSTEAD OF PIN)
uint8_t DIO_ReadPin(port Port,pin Pin){
	
	uint8_t data = 5;
	switch (Port)
	{
		case DIO_PORTA:
		data = GET_BIT(PINA,Pin);
		break;
		case DIO_PORTB:
		data = GET_BIT(PINB,Pin);
		break;
		case DIO_PORTC:
		data = GET_BIT(PINC,Pin);
		break;
		case DIO_PORTD:
		data = GET_BIT(PIND,Pin);
		break;
		default:
		//#warning "Port or Pin Not Correct"
		break;
	}
	return data;
}

//to activate Internal Pull-up
void DIO_SetPinPullup(port Port,pin Pin){
	switch (Port)
	{
		case DIO_PORTA:
		SET_BIT(PORTA, Pin);
		break;
		case DIO_PORTB:
		SET_BIT(PORTB, Pin);
		break;
		case DIO_PORTC:
		SET_BIT(PORTC, Pin);
		break;
		case DIO_PORTD:
		SET_BIT(PORTD, Pin);
		break;
	}
}


//to define direction (Input/Output)
void DIO_SetPortDirection(port Port,direction Direction){
	switch(Direction)
	{
		case DIO_INPUT:
		switch (Port)
		{
			case DIO_PORTA:
			DDRA = 0x00;
			break;
			case DIO_PORTB:
			DDRB = 0x00;
			break;
			case DIO_PORTC:
			DDRC = 0x00;
			break;
			case DIO_PORTD:
			DDRD= 0x00;
			break;
			default:
			//#warning "Port Not Correct"
			break;
		}
		break;
		case DIO_OUTPUT:
		switch (Port)
		{
			case DIO_PORTA:
			DDRA = 0xFF;
			break;
			case DIO_PORTB:
			DDRB = 0xFF;
			break;
			case DIO_PORTC:
			DDRC = 0xFF;
			break;
			case DIO_PORTD:
			DDRD= 0xFF;
			break;
			default:
			//#warning "Port or Pin Not Correct"
			break;
		}
		break;
	}
}
//to define state (High/Low)
void DIO_SetPortValue(port Port,state State){
	switch(State)
	{
		case DIO_LOW:
		switch (Port)
		{
			case DIO_PORTA:
			PORTA = 0x00;
			break;
			case DIO_PORTB:
			PORTB = 0x00;
			break;
			case DIO_PORTC:
			PORTC = 0x00;
			break;
			case DIO_PORTD:
			PORTD= 0x00;
			break;
			default:
			//#warning "Port Not Correct"
			break;
		}
		break;
		case DIO_HIGH:
		switch (Port)
		{
			case DIO_PORTA:
			PORTA = 0xFF;
			break;
			case DIO_PORTB:
			PORTB = 0xFF;
			break;
			case DIO_PORTC:
			PORTC = 0xFF;
			break;
			case DIO_PORTD:
			PORTD= 0xFF;
			break;
			default:
			//#warning "Port Not Correct"
			break;
		}
		break;
	}
}
//to change current state of port
void DIO_TogglePort(port Port){
	switch (Port)
	{
		case DIO_PORTA:
		PORTA ^= 0xFF;
		break;
		case DIO_PORTB:
		PORTB ^= 0xFF;
		break;
		case DIO_PORTC:
		PORTC ^= 0xFF;
		break;
		case DIO_PORTD:
		PORTD ^= 0xFF;
		break;
		default:
		//#warning "Port Not Correct"
		break;
	}
}

//to get port Value
uint8_t DIO_ReadPort(port Port){
	uint8_t data = 5;
	switch (Port)
	{
		case DIO_PORTA:
		data = PINA;
		break;
		case DIO_PORTB:
		data = PINB;
		break;
		case DIO_PORTC:
		data = PINC;
		break;
		case DIO_PORTD:
		data = PIND;
		break;
		default:
		//#warning "Port Not Correct"
		break;
	}
	return data;
}

//to activate Internal Pull-up
void DIO_SetPortPullup(port Port){
	switch (Port)
	{
		case DIO_PORTA:
		SET_BIT(PORTA,Port);
		break;
		case DIO_PORTB:
		SET_BIT(PORTB,Port);
		break;
		case DIO_PORTC:
		SET_BIT(PORTC,Port);
		break;
		case DIO_PORTD:
		SET_BIT(PORTD,Port);
		break;
	}
}

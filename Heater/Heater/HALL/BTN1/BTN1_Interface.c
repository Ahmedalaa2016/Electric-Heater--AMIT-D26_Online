/*
 * BTN1_Interface.c
 *
 * Created: 4/3/2022 4:57:14 PM
 *  Author: g_h_a
 */ 
#include "BTN1_Private.h"

void BTN1_Initialize(void){
	DIO_SetPinDirection(BTN1_PRT,BTN1,BTN1_INP);
}
uint8_t BTN1_Read(void){
	uint8_t BTN = BTN1_NPRESSED;
	uint8_t Val = 0;
	
	Val=DIO_ReadPin(BTN1_PRT,BTN1);
	_delay_ms(10);
	BTN = Val;
	while(BTN==BTN1_PRESSED)
	{
		BTN=DIO_ReadPin(BTN1_PRT,BTN1);
	}
	return Val;
}
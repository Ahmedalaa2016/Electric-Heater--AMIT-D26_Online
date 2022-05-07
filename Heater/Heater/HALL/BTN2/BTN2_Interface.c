/*
 * BTN0_Interface.c
 *
 * Created: 3/26/2022 2:06:27 PM
 *  Author: g_h_a
 */ 
#include "BTN2_Private.h"

void BTN2_Initialize(void)
{
	DIO_SetPinDirection(BTN2_PRT, BTN2, BTN2_INP);
}
uint8_t BTN2_Read(void)
{
	uint8_t BTN = BTN2_NPRESSED;
	uint8_t Val = 0;
	Val = DIO_ReadPin(BTN2_PRT, BTN2);
	_delay_ms(10);
	BTN = Val;
	while(BTN == BTN2_PRESSED)
	{
		
		BTN = DIO_ReadPin(BTN2_PRT, BTN2);
	}
	return Val;
}
/*
 * BTN0_Interface.c
 *
 * Created: 3/26/2022 2:06:27 PM
 *  Author: g_h_a
 */ 
#include "BTN0_Private.h"

void BTN0_Initialize(void)
{
	DIO_SetPinDirection(BTN0_PRT, BTN0, BTN0_INP);
}
uint8_t BTN0_Read(void)
{
	uint8_t BTN = BTN0_NPRESSED;
	uint8_t Val = 0;
	Val = DIO_ReadPin(BTN0_PRT, BTN0);
	_delay_ms(10);
	BTN = Val;
	while(BTN == BTN0_PRESSED)
	{
		BTN = DIO_ReadPin(BTN0_PRT, BTN0);
	}
	return Val;
}
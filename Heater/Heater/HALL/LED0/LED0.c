/*
 * LED0l.c
 *
 * Created: 3/21/2022 1:29:47 PM
 *  Author: g_h_a
 */ 
#include "LED0.h"

void LED0_Initialize(void){
	DIO_SetPinDirection(LED0_PRT,LED0,LED0_STATE);
}
void LED0_On(void){
	DIO_SetPinValue(LED0_PRT,LED0,LED0_HIGH);
}
void LED0_Off(void){
	DIO_SetPinValue(LED0_PRT,LED0,LED0_LOW);
}
void LED0_toggle(void){
	DIO_TogglePin(LED0_PRT,LED0);
}

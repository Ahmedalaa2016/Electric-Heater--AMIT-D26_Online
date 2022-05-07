/*
 * LED1.c
 *
 * Created: 3/21/2022 2:29:54 PM
 *  Author: g_h_a
 */ 
#include "LED1.h"
void LED1_Initialize(void){
	DIO_SetPinDirection(LED1_PRT,LED1,LED1_STATE);
}
void LED1_On(void){
	DIO_SetPinValue(LED1_PRT,LED1,LED1_HIGH);
}
void LED1_Off(void){
	DIO_SetPinValue(LED1_PRT,LED1,LED1_LOW);
}
void LED1_toggle(void){
	DIO_TogglePin(LED1_PRT,LED1);
}
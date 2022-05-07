/*
 * Relay.c
 *
 * Created: 3/21/2022 3:32:50 PM
 *  Author: g_h_a
 */ 
#include "Relay2.h"

void Relay2_Initialize(void){
	DIO_SetPinDirection(RELAY2_PRT,RELAY2,RELAY2_STATE);
}
void Relay2_On(void){
	DIO_SetPinValue(RELAY2_PRT,RELAY2,RELAY2_HIGH);
}
void Relay2_Off(void){
	DIO_SetPinValue(RELAY2_PRT,RELAY2,RELAY2_LOW);
}
void Relay2_toggle(void){
	DIO_TogglePin(RELAY2_PRT,RELAY2);
}
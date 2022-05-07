/*
 * Relay.c
 *
 * Created: 3/21/2022 3:32:50 PM
 *  Author: g_h_a
 */ 
#include "Relay.h"
void Relay_Initialize(void){
	DIO_SetPinDirection(RELAY_PRT,RELAY,RELAY_STATE);
}
void Relay_On(void){
	DIO_SetPinValue(RELAY_PRT,RELAY,RELAY_HIGH);
}
void Relay_Off(void){
	DIO_SetPinValue(RELAY_PRT,RELAY,RELAY_LOW);
}
void Relay_toggle(void){
	DIO_TogglePin(RELAY_PRT,RELAY);
}
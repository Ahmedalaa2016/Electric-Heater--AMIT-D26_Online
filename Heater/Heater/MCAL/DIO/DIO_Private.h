/*
 * DIO.h
 *
 * Created: 3/21/2022 4:29:09 PM
 *  Author: g_h_a
 */ 


#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

#include "DIO_Configurations.h"

//to define direction (Input/Output)
void DIO_SetPinDirection(port Port,pin Pin,direction Direction);
//to define state (High/Low)
void DIO_SetPinValue(port Port,pin Pin,state State);
//to change current state of pin
void DIO_TogglePin(port Port,pin Pin);
//to get pin Value
uint8_t DIO_ReadPin(port Port,pin Pin);
//to activate Internal Pull-up
void DIO_SetPinPullup(port Port,pin Pin);


//to define direction (Input/Output)
void DIO_SetPortDirection(port Port,direction Direction);
//to define state (High/Low)
void DIO_SetPortValue(port Port,state State);
//to change current state of pin
void DIO_TogglePort(port Port);
//to get pin Value
uint8_t DIO_ReadPort(port Port);
//to activate Internal Pull-up
void DIO_SetPortPullup(port Port);



#endif /* DIO_H_ */
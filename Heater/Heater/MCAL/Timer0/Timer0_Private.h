/*
 * Timer0_Private.h
 *
 * Created: 4/10/2022 1:25:48 PM
 *  Author: g_h_a
 */ 


#ifndef TIMER0_PRIVATE_H_
#define TIMER0_PRIVATE_H_

#include "PWM0_Private.h"
#include "Timer0_configuration.h"

void Timer0_OVF_WithoutInterrupt_Intialize(Timer0_Mode modes);
void Timer0_OVF_WithoutInterrupt_Start(Timer0_Prescaler prescaler);
void Timer0_OVF_WithoutInterrupt_Stop(Timer0_Prescaler prescaler);
void Timer0_OVF_WithoutInterrupt_SetDelay(uint32_t delay);

void Timer0_CTC_WithoutInterrupt_Initialize(Timer0_Mode modes,CTC0_Mode ctcmode);
void Timer0_CTC_WithoutInterrupt_Start(Timer0_Prescaler prescaler);
void Timer0_CTC_WithoutInterrupt_Stop(Timer0_Prescaler prescaler);
void Timer0_CTC_WithoutInterrupt_SetDelay(uint32_t delay, uint8_t OCRValue);

void Timer0_OVF_WithInterrupt_Intialize(Timer0_Mode modes);
void Timer0_OVF_WithInterrupt_Start(Timer0_Prescaler prescaler);
void Timer0_OVF_WithInterrupt_Stop(Timer0_Prescaler prescaler);
void Timer0_OVF_WithInterrupt_SetDelay(uint32_t delay);

void Timer0_CTC_WithInterrupt_Initialize(Timer0_Mode modes,CTC0_Mode ctcmode);
void Timer0_CTC_WithInterrupt_Start(Timer0_Prescaler prescaler);
void Timer0_CTC_WithInterrupt_Stop(Timer0_Prescaler prescaler);
void Timer0_CTC_WithInterrupt_SetDelay(uint32_t delay, uint8_t OCRValue);

#endif /* TIMER0_PRIVATE_H_ */
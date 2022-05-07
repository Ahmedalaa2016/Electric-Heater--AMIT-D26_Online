/*
 * ADC_Private.h
 *
 * Created: 4/6/2022 1:43:35 AM
 *  Author: g_h_a
 */ 


#ifndef ADC_PRIVATE_H_
#define ADC_PRIVATE_H_

#include "ADC_Configuration.h"

void ADC_Initialize(void);
uint16_t ADC_Read(ADC_Chanel adc);


#endif /* ADC_PRIVATE_H_ */
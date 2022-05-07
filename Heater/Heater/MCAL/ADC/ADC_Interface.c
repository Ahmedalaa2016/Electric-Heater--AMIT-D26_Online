/*
 * ADC_Interface.c
 *
 * Created: 4/6/2022 1:44:01 AM
 *  Author: g_h_a
 */ 
#include "ADC_Private.h"

void ADC_Initialize(void)
{
	ADMUX = 0X40;
	/*
	1-Enable ADC
	2-Select Pre_scaler
	3-Auto trigger
	4-Disable peripheral Interrupt
	*/
	ADCSRA=0xA7;
}
uint16_t ADC_Read(ADC_Chanel adc)
{
	uint16_t ADCReading=0;
	//choose channel
	switch (adc)
	{
		case ADC0:
		ADMUX = 0x40;
		break;
		
		case ADC1:
		ADMUX = 0x41;
		break;
		
		case ADC2:
		ADMUX=0x42;
		break;
		
		case ADC3:
		ADMUX=0x43;
		break;
		
		case ADC4:
		ADMUX=0x44;
		break;
		
		case ADC5:
		ADMUX=0x45;
		break;
		
		case ADC6:
		ADMUX=0x46;
		break;
		
		case ADC7:
		ADMUX=0x47;
		break;
		
		default:
		ADMUX=40;
		break;
	}
	//Enable for conversion(soc)
	SET_BIT(ADCSRA,ADSC);
	//polling until conversion finished(EOC)
	while (GET_BIT(ADCSRA,ADIF)!=1);
	//Return Data from ADC
	ADCReading = ADC_VAL;
	return ADCReading;
}
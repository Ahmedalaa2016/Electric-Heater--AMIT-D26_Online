/*
 * ADC_Adress.h
 *
 * Created: 4/6/2022 1:42:39 AM
 *  Author: g_h_a
 */ 


#ifndef ADC_ADRESS_H_
#define ADC_ADRESS_H_

/*
#define ADCL     (*(volatile uint8_t*)(0x24))
#define ADCH     (*(volatile uint8_t*)(0x25))
#define ADMUX    (*(volatile uint8_t*)(0x27))
#define ADCSRA   (*(volatile uint8_t*)(0x26))
*/
#define ADC_VAL  (*(volatile uint16_t*)(0x24))


#endif /* ADC_ADRESS_H_ */
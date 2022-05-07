/*
 * TMU_priv.h
 *
 *  Created on: Dec 17, 2021
 *      Author: Ahmed El-Gaafrawy
 */

#ifndef TMU_PRIV_H_
#define TMU_PRIV_H_

#define TIMER0		63
#define TIMER1		23
#define TIMER2		98

typedef struct
{
	void (*pfun)(void);
	uint32_t Periodicity;
	uint8_t state;
}TCB_t;

 /*TIMSK*/
 #define TIMSK	*((volatile uint8_t*) 0x59)

 /*TIFR*/
 #define TIFR	*((volatile uint8_t*) 0x58)

 /*TCCR*/
 #define TCCR0	*((volatile uint8_t*) 0x53)
 #define TCCR1A	*((volatile uint8_t*) 0x4f)
 #define TCCR1B	*((volatile uint8_t*) 0x4e)
 #define TCCR2	*((volatile uint8_t*) 0x45)

 /*TCNT*/
 #define TCNT0	*((volatile uint8_t*) 0x52)

 #define TCNT1H	*((volatile uint8_t*) 0x4d)
 #define TCNT1L	*((volatile uint8_t*) 0x4c)

 #define TCNT1	*((volatile uint16_t*) 0x4c)

 #define TCNT2	*((volatile uint8_t*) 0x44)

 /*OCR*/
 #define OCR0	*((volatile uint8_t*) 0x5c)
 #define OCR1AH	*((volatile uint8_t*) 0x4b)
 #define OCR1AL	*((volatile uint8_t*) 0x4a)

 #define OCR1A	*((volatile uint16_t*) 0x4a)

 #define OCR1BH	*((volatile uint8_t*) 0x49)
 #define OCR1BL	*((volatile uint8_t*) 0x48)

 #define OCR1B	*((volatile uint16_t*) 0x48)

 #define OCR2	*((volatile uint8_t*) 0x43)

 
#define READY			73
#define PAUSED			30
#define KILLED			19


#endif /* TMU_PRIV_H_ */

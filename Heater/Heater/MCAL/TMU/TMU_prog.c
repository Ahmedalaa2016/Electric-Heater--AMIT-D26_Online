/*
 * TMU_prog.c
 *
 *  Created on: Dec 17, 2021
 *      Author: Ahmed El-Gaafrawy
 */
#include "CPU_Configurations.h"


#include "TMU_config.h"
#include "TMU_priv.h"

static uint16_t Num_ctc=0;
static uint16_t counter=0;
static uint32_t osTicks=0;
static TCB_t System_tasks[ MAX_TASKS ];

void TMU_vidInit(void)
{
#if TIMER_CHANNEL == TIMER0
	//ctc, oc0 dis, pres =1024
	TCCR0 = 0x0D;

	#if OS_TICK > 0 && OS_TICK <= 16
		OCR0 = (uint8_t)(  ((unsigned long long)OS_TICK * F_CPU)/1024000ul  ) ;
		Num_ctc = 1;
		counter = Num_ctc;
	#elif OS_TICK > 16
		uint8_t max ;
		for (max = 16 ; max >0; max--)
			if (OS_TICK % max == 0)
				break;

		Num_ctc = OS_TICK / max;
		counter = Num_ctc;
		OCR0 = (uint8_t)(  ((unsigned long long)max * F_CPU)/1024000ul  ) ;
	#else
	#error "OS time is invalid"
	#endif

	TIMSK |= (1<<1);

#elif TIMER_CHANNEL == TIMER1


#elif TIMER_CHANNEL == TIMER2

#else
#error "Timer channel is wrong"
#endif
}

void TMU_vidCreateTask( void (*ptr)(void), uint32_t periodicity, uint8_t priority)
{
	if (ptr != NULL && priority < MAX_TASKS)
	{
		System_tasks[priority].pfun        = ptr;
		System_tasks[priority].Periodicity = periodicity;
		System_tasks[priority].state       = READY;
	}
}


void TMU_vidStartScheduler(void)
{
	asm ("SEI"); // SREG |=(1<<7);
	uint32_t temp=0;
	while (1)
	{
		if (osTicks > temp)
		{
			//0 highest, max-1 lowest
			//for (u8 i= 0; i< MAX_TASKS ; i++ )
			//0 lowest, max-1 highest
			for (int8_t i= MAX_TASKS-1 ; i>=0 ;i--)
			{
				if (System_tasks[i].pfun != NULL &&
						(osTicks % System_tasks[i].Periodicity) == 0 &&
						System_tasks[i].state == READY)
				{
					System_tasks[i].pfun ();
				}
			}
			temp = osTicks;
		}
	}
}










#if TIMER_CHANNEL == TIMER0
// isr ctc timer0
void __vector_10(void)__attribute__((signal));
void __vector_10 (void)
{
	counter--;
	if (counter == 0 )
	{
		osTicks++;

		counter = Num_ctc;
	}
}

#elif TIMER_CHANNEL == TIMER1


#elif TIMER_CHANNEL == TIMER2

#else
#error "Timer channel is wrong"
#endif

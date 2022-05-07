/*
 * Interrupt_Interface.c
 *
 * Created: 4/5/2022 3:13:45 PM
 *  Author: g_h_a
 */ 
#include "Interrupt_Private.h"

void External_Interrupt0_Initialization(void)
{
	//Define Direction as input
	CLR_BIT(DDRD, 2);
	//Enable global interrupt
	#if GLOBAL_INTERRUPT_STATUS == GLOBAL_INTERRUPT_ENABLE
	sei();//SET interrupt
	#elif GLOBAL_INTERRUPT_STATUS == GLOBAL_INTERRUPT_DISABLE
	cli();//Clear interrupt
	#endif
	//Enable peripheral interrupt
	SET_BIT(GICR, INT0);
	//Choose interrupt sense
	#if INTERRUPT_SENSE == LOW_SIGNAL
	CLR_BIT(MCUCR, ISC01);CLR_BIT(MCUCR, ISC00);// 0     0
	#elif INTERRUPT_SENSE == HIGH_SIGNAL
	CLR_BIT(MCUCR, ISC01);SET_BIT(MCUCR, ISC00);// 0     1
	#elif INTERRUPT_SENSE == RISING_SIGNAL
	SET_BIT(MCUCR, ISC01);SET_BIT(MCUCR, ISC00);// 1     1
	#elif INTERRUPT_SENSE == FALLING_SIGNAL
	SET_BIT(MCUCR, ISC01);CLR_BIT(MCUCR, ISC00);// 1     0
	#endif
	
}
void External_Interrupt1_Initialization(void)
{
		//Define Direction as input
		CLR_BIT(DDRD, 3);
		//Enable global interrupt
		#if GLOBAL_INTERRUPT_STATUS == GLOBAL_INTERRUPT_ENABLE
		sei();//SET interrupt
		#elif GLOBAL_INTERRUPT_STATUS == GLOBAL_INTERRUPT_DISABLE
		cli();//Clear interrupt
		#endif
		//Enable peripheral interrupt
		SET_BIT(GICR, INT1);
		//Choose interrupt sense
		#if INTERRUPT_SENSE == LOW_SIGNAL
		CLR_BIT(MCUCR, ISC11);CLR_BIT(MCUCR, ISC10);// 0     0
		#elif INTERRUPT_SENSE == HIGH_SIGNAL
		CLR_BIT(MCUCR, ISC11);SET_BIT(MCUCR, ISC10);// 0     1
		#elif INTERRUPT_SENSE == RISING_SIGNAL
		SET_BIT(MCUCR, ISC11);SET_BIT(MCUCR, ISC10);// 1     1
		#elif INTERRUPT_SENSE == FALLING_SIGNAL
		SET_BIT(MCUCR, ISC11);CLR_BIT(MCUCR, ISC10);// 1     0
		#endif
}
void External_Interrupt2_Initialization(void);
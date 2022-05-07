/*
 * CPU_Configurations.h
 *
 * Created: 3/15/2022 12:48:07 AM
 *  Author: g_h_a
 */ 


#ifndef CPU_CONFIGURATIONS_H_
#define CPU_CONFIGURATIONS_H_

#undef F_CPU //DISABLE INTERNAL OSCILLATOR
#define F_CPU 16000000 //ENABLE EXTERNAL OSCILLATOR

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#include <avr/io.h>//ALL PORTS DEFINE IN AVR LIBRARY
#include <util/delay.h>//ENABLE _DELAY_MS() FUNCTION
#include <avr/interrupt.h>//ENABLE INTERRUPTS FUNCTION
#include <avr/eeprom.h>  /* Include AVR EEPROM header file */

#include "Bit_math.h"
#include "STD_Types.h"
#include "DIO_Private.h"
#include "Interrupt_Private.h"
#include "Timer0_Private.h"
#include "ADC_Private.h"

#endif /* CPU_CONFIGURATIONS_H_ */
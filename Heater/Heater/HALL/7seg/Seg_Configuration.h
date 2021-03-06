/*
 * Seg_Configuration.h
 *
 * Created: 3/23/2022 3:28:51 PM
 *  Author: g_h_a
 */ 


#ifndef SEG_CONFIGURATION_H_
#define SEG_CONFIGURATION_H_

#include "CPU_Configurations.h"

#define SEVENSEG PORTA

#define SEVENSEG_DATA_PRT DIO_PORTA
#define SEVENSEG_CTRL_PRT DIO_PORTB

#define SEVENSEG_DATA_A   DIO_PIN4
#define SEVENSEG_DATA_B   DIO_PIN5
#define SEVENSEG_DATA_C   DIO_PIN6
#define SEVENSEG_DATA_D   DIO_PIN7

#define SEVENSEG_CTRL_EN1 DIO_PIN1
#define SEVENSEG_CTRL_EN2 DIO_PIN2
#define SEVENSEG_CTRL_DOT DIO_PIN3

#define SEVENSEG_OUTPUT DIO_OUTPUT
#define SEVENSEG_INPUT DIO_INPUT

#define SEVENSEG_LOW DIO_LOW
#define SEVENSEG_HIGH DIO_HIGH

#endif /* SEG_CONFIGURATION_H_ */
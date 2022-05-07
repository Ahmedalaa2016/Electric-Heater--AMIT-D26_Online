/*
 * Seg_Private.h
 *
 * Created: 3/23/2022 3:29:24 PM
 *  Author: g_h_a
 */ 


#ifndef SEG_PRIVATE_H_
#define SEG_PRIVATE_H_

#include "Seg_Configuration.h"

void SEVENSEG_Initialize(void);
void SEVENSEG_OFF(void);

void SEVENSEG_Enable1(void);
void SEVENSEG_Disable1(void);

void SEVENSEG_Enable2(void);
void SEVENSEG_Disable2(void);

void SEVENSEG_DOT_Enable(void);
void SEVENSEG_DOT_Disable(void);

void SEVENSEG_Display(uint8_t number);

#endif /* SEG_PRIVATE_H_ */
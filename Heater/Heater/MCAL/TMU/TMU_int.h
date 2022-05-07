/*
 * TMU_int.h
 *
 *  Created on: Dec 17, 2021
 *      Author: Ahmed El-Gaafrawy
 */

#ifndef TMU_INT_H_
#define TMU_INT_H_

void TMU_vidInit(void);

void TMU_vidCreateTask( void (*ptr)(void), uint32_t periodicity, uint8_t priority);

void TMU_vidStartScheduler(void);

#endif /* TMU_INT_H_ */

/*
 * TMU_config.h
 *
 *  Created on: Dec 17, 2021
 *      Author: Ahmed El-Gaafrawy
 */

#ifndef TMU_CONFIG_H_
#define TMU_CONFIG_H_
#include "TMU_priv.h"
#include "CPU_Configurations.h"

#define TIMER_CHANNEL			TIMER0

// os tick is a time of scheduler in mS
#define OS_TICK					20llu

#define MAX_TASKS				6

#endif /* TMU_CONFIG_H_ */

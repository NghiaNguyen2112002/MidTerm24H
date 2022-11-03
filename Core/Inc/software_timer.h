/*
 * software_timer.h
 *
 *  Created on: Nov 3, 2022
 *      Author: DELL
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"


void InitSoftwareTimer(void);

void SetTimer_0(uint16_t duration);
void SetTimer_1(uint16_t duration);

void RunSoftwareTimer(void);

uint8_t FlagTimer_0(void); //return timer1 flag
uint8_t FlagTimer_1(void); //return timer2 flag


#endif /* INC_SOFTWARE_TIMER_H_ */

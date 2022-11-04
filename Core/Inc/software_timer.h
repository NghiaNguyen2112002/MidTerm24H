/*
 * software_timer.h
 *
 *  Created on: Nov 3, 2022
 *      Author: DELL
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_


#include "main.h"
#include "button_reading.h"

void RunSoftwareTimer(void);
void SetTimer_0(uint16_t duration);
void SetTimer_1(uint16_t duration);

uint8_t FlagTimer_0(void); //return timer0 flag
uint8_t FlagTimer_1(void); //return timer1 flag


#endif /* INC_SOFTWARE_TIMER_H_ */

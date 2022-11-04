/*
 * button_reading.h
 *
 *  Created on: Nov 3, 2022
 *      Author: DELL
 */

#ifndef INC_BUTTON_READING_H_
#define INC_BUTTON_READING_H_

#include "main.h"

#define N0_OF_BUTTONS 				       3

#define BUTTON_PORT							GPIOA
//timer interrupt duration is 10ms, so to pass 1 second,
//we need to jump to the interrupt service routine 100 time
#define DURATION_FOR_AUTO_INCREASING	   100


void button_reading(void);
unsigned char is_button_pressed(unsigned char index);
unsigned char is_button_pressed_1s(unsigned char index);

#endif /* INC_BUTTON_READING_H_ */

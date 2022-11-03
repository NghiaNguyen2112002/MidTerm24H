/*
 * button_reading.h
 *
 *  Created on: Nov 3, 2022
 *      Author: DELL
 */

#ifndef INC_BUTTON_READING_H_
#define INC_BUTTON_READING_H_

#include "main.h"

#define PORT_BUTTON						GPIOA
#define NO_OF_BUTTONS 					3
#define BUTTON_IS_RELEASED				GPIO_PIN_SET
#define BUTTON_IS_PRESSED				GPIO_PIN_RESET


enum Buttons {button0, button1, button2};

void InitButtonReading(void);
void ButtonReading(void);				//invoke this function in timer.c to read button

uint8_t IsButtonPressed(Buttons button);			//true -> return 1, false 0
uint8_t IsButtonPressed_1s(Buttons button);


#endif /* INC_BUTTON_READING_H_ */

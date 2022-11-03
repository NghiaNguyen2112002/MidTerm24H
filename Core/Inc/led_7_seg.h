/*
 * led_7_seg.h
 *
 *  Created on: Nov 3, 2022
 *      Author: DELL
 */

#include "main.h"

#ifndef INC_LED_7_SEG_H_
#define INC_LED_7_SEG_H_

#define 	PORT_LED		GPIOB


void InitLed7Seg(void);

void LightOff();
void UpdateLed7SegBuffer(uint8_t time1, uint8_t time2);
void UpdateLed7Seg(uint8_t index);  //invoke this function to display 2 led7seg
									//index = 1 -> enable led7seg 1  ...  2 -> led7seg 2

#endif /* INC_LED_7_SEG_H_ */

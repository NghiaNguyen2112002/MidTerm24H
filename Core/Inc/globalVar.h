/*
 * gobalVar.h
 *
 *  Created on: Nov 5, 2022
 *      Author: DELL
 */

#ifndef INC_GLOBALVAR_H_
#define INC_GLOBALVAR_H_

#include "main.h"

#define RESET_BUTTON  	0
#define INC_BUTTON		1
#define DEC_BUTTON		2

extern uint8_t saveBuffer;
extern uint8_t number;

extern uint8_t flagIncreaseNumber1Sec;
extern uint8_t flagDecreaseNumber1Sec;

void InitVar(void);

#endif /* INC_GLOBALVAR_H_ */

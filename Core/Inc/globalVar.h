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

#define TIMEOUT_FOR_BUTTON		10000   //10000ms
#define TIME_INVOKE_FSM			10		//10ms

extern uint8_t saveBuffer;
extern uint8_t number;

extern uint8_t flagIncreaseNumberMode1;
extern uint8_t flagDecreaseNumberMode1;

extern uint8_t flagDecreaseNumberMode2;
void InitVar(void);

#endif /* INC_GLOBALVAR_H_ */

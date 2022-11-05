/*
 * fsm_midterm.c
 *
 *  Created on: Nov 5, 2022
 *      Author: DELL
 */

#include "fsm_midterm.h"

#include "globalVar.h"

enum MODE {MODE0, MODE1, MODE2};

enum MODE mode = MODE0;

//timeout for button is 10s, while time invoking fsm is 10ms
// so we create a counter

uint16_t counterTimeout	= TIMEOUT_FOR_BUTTON / TIME_INVOKE_FSM;

void Mode0Manual(){
	if(is_button_pressed(RESET_BUTTON)){
		counterTimeout	= TIMEOUT_FOR_BUTTON / TIME_INVOKE_FSM;
		number = 0;
	}
	else if(is_button_pressed(INC_BUTTON)){
		counterTimeout	= TIMEOUT_FOR_BUTTON / TIME_INVOKE_FSM;
		number = number + 1 > 9 ? 0 : number + 1;
	}
	else if(is_button_pressed(DEC_BUTTON)){
		counterTimeout	= TIMEOUT_FOR_BUTTON / TIME_INVOKE_FSM;
		number = number - 1 < 0 ? 9 : number - 1;
	}
}
void fsm_simple_buttons_run(){
	switch(mode){
	case MODE0:
		//ex1
		Mode0Manual();
		if(is_button_pressed_3s(INC_BUTTON) || is_button_pressed_3s(DEC_BUTTON)){
			mode = MODE1;
		}
		if(counterTimeout == 0){
			mode = MODE2;
		}
		counterTimeout--;
		break;
	case MODE1:
		//in this mode, number increases by 1 every sec
		if(is_button_pressed_3s(INC_BUTTON)) {
			flagIncreaseNumberMode1 = 1;
		}
		else if(is_button_pressed_3s(DEC_BUTTON)){
			flagDecreaseNumberMode1 = 1;
		}
		else {
			flagIncreaseNumberMode1 = 0;
			flagDecreaseNumberMode1 = 0;
			mode = MODE0;
		}
		break;
	case MODE2:
		flagDecreaseNumberMode2 = 1;
		saveBuffer = number;
		if(is_button_pressed(INC_BUTTON) || is_button_pressed(DEC_BUTTON)){
			number = saveBuffer;
			mode = MODE0;
		}
		break;
	default:
		break;
	}
}

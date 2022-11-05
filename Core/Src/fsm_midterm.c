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

uint8_t isNumberIncrease = 0;  //0: decrease,  1: increase

void fsm_simple_buttons_run(){
	switch(mode){
	case MODE0:
		//ex1
		if(is_button_pressed_3s(INC_BUTTON) || is_button_pressed_3s(DEC_BUTTON)){
			mode = MODE1;
		}

		if(is_button_pressed(RESET_BUTTON)){
			number = 0;
		}
		else if(is_button_pressed(INC_BUTTON)){
			number = number + 1 > 9 ? 0 : number + 1;
		}
		else if(is_button_pressed(DEC_BUTTON)){
			number = number - 1 < 0 ? 9 : number - 1;
		}
		break;
	case MODE1:
		//in this mode, number increases by 1 every sec
		if(FlagTimer_1()){
			SetTimer_1(1000);

			if(is_button_pressed_3s(INC_BUTTON)) {
				number = number + 1 > 9 ? 0 : number + 1;
			}
			else if(is_button_pressed_3s(DEC_BUTTON)){
				number = number - 1 < 0 ? 9 : number - 1;
			}
			else mode = MODE0;
		}
		break;
	case MODE2:
		break;
	default:
		break;
	}
}

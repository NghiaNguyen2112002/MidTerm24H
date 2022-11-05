/*
 * fsm_midterm.c
 *
 *  Created on: Nov 5, 2022
 *      Author: DELL
 */

#include "fsm_midterm.h"

#include "globalVar.h"

enum MODE {MODE0, MODE1, MODE2, MODE3};

enum MODE mode = MODE0;


void fsm_simple_buttons_run(){
	switch(mode){
	case MODE0:
		//ex1
		if(is_button_pressed(RESET_BUTTON)){
			number = 0;
		}
		else if(is_button_pressed(INC_BUTTON)){
			number++;
		}
		else if(is_button_pressed(DEC_BUTTON)){
			number--;
		}
		break;
	case MODE1:
		break;
	case MODE2:
		break;
	case MODE3:
		break;
	default:
		break;
	}
}

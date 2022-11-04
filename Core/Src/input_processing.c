
#include "input_processing.h"


enum ButtonState{BUTTON_RELEASED, BUTTON_PRESSED, BUTTON_PRESSED_MORE_THAN_1_SECOND} ;

enum ButtonState buttonState[N0_OF_BUTTONS] = {BUTTON_RELEASED, BUTTON_RELEASED, BUTTON_RELEASED};
void fsm_for_input_processing(void){
	for(uint8_t i = 0; i < N0_OF_BUTTONS; i++){
		switch(buttonState[i]){
		case BUTTON_RELEASED:
			if(is_button_pressed(i)){
				buttonState[i] = BUTTON_PRESSED;
				//INCREASE VALUE OF PORT A BY ONE UNIT
			}
			break;
		case BUTTON_PRESSED:
			if(!is_button_pressed(i)){
				buttonState[i] = BUTTON_RELEASED;
			} else {
				if(is_button_pressed_1s(i)){
					buttonState[i] = BUTTON_PRESSED_MORE_THAN_1_SECOND;
				}
			}
			break;
		case BUTTON_PRESSED_MORE_THAN_1_SECOND:
			if(!is_button_pressed(i)){
				buttonState[i] = BUTTON_RELEASED;
			}
			//todo
			break;
		}
	}
}

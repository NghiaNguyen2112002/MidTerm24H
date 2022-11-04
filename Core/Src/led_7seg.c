#include "led_7_seg.h"


uint16_t enableMask[2] = {en_0_Pin, en_1_Pin};
uint8_t  led7SegBuffer[2] = {1, 2};


void InitLed7Seg(void);

void LightOff(){
	HAL_GPIO_WritePin(PORT_LED, en_0_Pin | en_1_Pin, RESET);
}


void DisplayNum(uint8_t num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(PORT_LED, a_Pin | b_Pin | c_Pin |
										d_Pin | e_Pin | f_Pin, RESET);
		HAL_GPIO_WritePin(PORT_LED, g_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(PORT_LED, b_Pin | c_Pin, RESET);
		HAL_GPIO_WritePin(PORT_LED, a_Pin | d_Pin | e_Pin |
										f_Pin | g_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(PORT_LED, a_Pin | b_Pin | d_Pin |
										e_Pin | g_Pin, RESET);
		HAL_GPIO_WritePin(PORT_LED, f_Pin | c_Pin, SET);
		break;
	case 3:
		HAL_GPIO_WritePin(PORT_LED, a_Pin | b_Pin | c_Pin |
									d_Pin | g_Pin, RESET);
		HAL_GPIO_WritePin(PORT_LED, f_Pin | e_Pin, SET);
		break;
	case 4:
		HAL_GPIO_WritePin(PORT_LED, b_Pin | c_Pin | f_Pin |
									g_Pin, RESET);
		HAL_GPIO_WritePin(PORT_LED, a_Pin | e_Pin | d_Pin, SET);
		break;
	case 5:
		HAL_GPIO_WritePin(PORT_LED, a_Pin | f_Pin | c_Pin |
									d_Pin | g_Pin, RESET);
		HAL_GPIO_WritePin(PORT_LED, b_Pin | e_Pin, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(PORT_LED, a_Pin | f_Pin | c_Pin |
									d_Pin | e_Pin | g_Pin, RESET);
		HAL_GPIO_WritePin(PORT_LED, b_Pin, SET);
		break;
	case 7:
		HAL_GPIO_WritePin(PORT_LED, a_Pin | b_Pin | c_Pin, RESET);
		HAL_GPIO_WritePin(PORT_LED, d_Pin | e_Pin | f_Pin | g_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(PORT_LED, a_Pin | b_Pin | c_Pin |
									d_Pin | e_Pin | f_Pin | g_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(PORT_LED, a_Pin | b_Pin | c_Pin |
									d_Pin | f_Pin | g_Pin, RESET);
		HAL_GPIO_WritePin(PORT_LED, e_Pin, SET);
		break;
	}

}


void EnableLed(uint8_t index){
	if(index >= 0 && index <= 1){
		HAL_GPIO_WritePin(PORT_LED, enableMask[2 - index - 1], SET);
		HAL_GPIO_WritePin(PORT_LED, enableMask[index], RESET);
	}
}
void UpdateLed7SegBuffer(uint8_t time1){
	if(time1 >= 0 && time1 <= 99){
		led7SegBuffer[0] = time1 / 10;
		led7SegBuffer[1] = time1 % 10;
	}
}
void UpdateLed7Seg(uint8_t index){
	EnableLed(index);
	DisplayNum( led7SegBuffer[index] );
}


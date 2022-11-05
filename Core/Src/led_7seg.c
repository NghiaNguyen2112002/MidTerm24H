#include "led_7_seg.h"

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



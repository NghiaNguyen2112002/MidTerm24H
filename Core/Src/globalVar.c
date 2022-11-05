/*
 * globalVar.c
 *
 *  Created on: Nov 5, 2022
 *      Author: DELL
 */
#include "globalVar.h"
uint8_t saveBuffer;
uint8_t number;

uint8_t flagIncreaseNumberMode1;
uint8_t flagDecreaseNumberMode1;

uint8_t	flagDecreaseNumberMode2;
void InitVar(void){
	saveBuffer = 0;
	number = 0;
	flagIncreaseNumberMode1 = 0;
	flagDecreaseNumberMode1 = 0;

	flagDecreaseNumberMode2 = 0;
}


/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"


#include "switch.h"
#include "I2c_lcd.h"
#include "i2c.h"
#include "adc.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	char str[22];
	uint16_t val;
	SystemInit();
	SwitchInit(SWITCH);
	ADC_Init();
	I2CInit();
	LcdInit();
	LcdPuts(LCD_LINE1,"hello desd");
	while(1)
	{
	 val= ADC_GetValue();
	 sprintf(str,"adc=%d",val);

	while(exti0_flag==1)
	LcdPuts(LCD_LINE2,str);
	}



	return 0;
}


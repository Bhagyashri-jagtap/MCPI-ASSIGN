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
#include "led.h"
#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	SystemInit();
	DelayMs(1);

			LedInit(LED_GREEN);
			LedInit(LED_ORANGE);
			LedInit(LED_RED);
			LedInit(LED_BLUE);


			while(1)
			{
				LedBlink(LED_GREEN, 200);
				LedBlink(LED_ORANGE, 200);
				LedBlink(LED_RED, 200);
				LedBlink(LED_BLUE, 200);
				LedBlink(LED_BLUE, 200);
			    LedBlink(LED_RED, 200);
			    LedBlink(LED_ORANGE, 200);
			    LedBlink(LED_GREEN, 200);
			}

	return 0;
}
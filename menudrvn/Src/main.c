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
#include <string.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"
#include "uart.h"
#include "eeprom.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	int ch=0;

	char str[32]="";
	SystemInit();
	UartInit(BAUD_9600);

	EEPROM_Init();
	UartPuts("enter string\r\n");
	while(1)
	{
		UartPuts("enter the choice:\r\n1=write string into EEPROM at address 0x000\r\n,2=read 32 byte from address 0x000 display string into USART");
		 UartGets(str);
		 sscanf(str,"%d",&ch);
		 switch(ch)

		 {
		 case 1:
			 UartGets(str);
			 EEPROM_Write(0x0020,(uint8_t*)str,strlen(str)+1);
			 break;


		 case 2:
			 EEPROM_Read(0x0020,(uint8_t*)str,32);
			 UartPuts(str);
			 			 break;
			 			 ch=0;
		 }


	}

	return 0;
	}

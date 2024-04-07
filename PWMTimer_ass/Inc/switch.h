/*
 * switch.h
 *
 *  Created on: Apr 7, 2024
 *      Author: bhagyashri
 */

#ifndef SWITCH_H_
#define SWITCH_H_


#include "stm32f4xx.h"
#include "stm32f407xx.h"

#define SWITCH_GPIO     GPIOF
#define SWITCH_GPIO_EN  0

#define SWITCH          0

void SwitchInit(uint32_t  pin);
int switchGetState(uint32_t pin);

extern int exti0_flag;



#endif /* SWITCH_H_ */

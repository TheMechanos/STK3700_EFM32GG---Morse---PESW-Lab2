/*
 * delay.c
 *
 *  Created on: 28 gru 2020
 *      Author: SHON
 */
#include "delay.h"



void SysTick_Handler(void) {
    TickCounter++;
}

void Delay(uint32_t delay) {
  volatile uint32_t initialvalue = TickCounter;
  while( (TickCounter-initialvalue) < delay ) {}
}

void configDelay(){
  SysTick_Config(SystemCoreClock/1000);
  __enable_irq();

}

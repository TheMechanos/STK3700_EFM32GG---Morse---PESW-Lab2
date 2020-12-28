/*
 * delay.h
 *
 *  Created on: 28 gru 2020
 *      Author: SHON
 */

#ifndef SRC_DELAY_H_
#define SRC_DELAY_H_

#include <stdint.h>
#include "em_device.h"
#include "delay.h"

static uint32_t volatile TickCounter = 0;

void configDelay();

void Delay(uint32_t delay);

#endif /* SRC_DELAY_H_ */

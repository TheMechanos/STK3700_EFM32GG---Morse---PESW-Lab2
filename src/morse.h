/*
 * morse.h
 *
 *  Created on: 28 gru 2020
 *      Author: SHON
 */

#ifndef SRC_MORSE_H_
#define SRC_MORSE_H_

#include "delay.h"

#include <stdint.h>
#include "em_device.h"
#include "em_chip.h"
#include "em_cmu.h"
#include "em_gpio.h"
#include "bsp.h"

typedef struct{
  char character;
  char data[8];
}Sign;

void showDot();
void showLine();

#define MORSE_DOT_LEN 250
#define MORSE_LINE_LEN 3 * MORSE_DOT_LEN

#define MORSE_SIGN_ELEMENTS_BREAKE 1 * MORSE_DOT_LEN
#define MORSE_SIGN_BREAKE 3 * MORSE_DOT_LEN
#define MORSE_SPACE_BREAKE 7 * MORSE_DOT_LEN


void charToLowerCase(char *s);
void showCharInMorseCode(char *s);
void showStringInMorseCode(char *a);

static const Sign morseData[]={
  {'a', ".-"},
  {'b', "-..."},
  {'c', "-.-."},
  {'d', "-.."},
  {'e', "."},
  {'f', "..-."},
  {'g', "--."},
  {'h', "...."},
  {'i', ".."},
  {'j', ".---"},
  {'k', "-.-"},
  {'l', ".-.."},
  {'m', "--"},
  {'n', "-."},
  {'o', "---"},
  {'p', ".--."},
  {'q', "--.-"},
  {'r', ".-."},
  {'s', "..."},
  {'t', "-"},
  {'u', "..-"},
  {'v', "...-"},
  {'w', ".--"},
  {'y', "-.--"},
  {'z', "--.."},
  {'0', "-----"},
  {'1', ".----"},
  {'2', "..---"},
  {'3', "...--"},
  {'4', "....-"},
  {'5', "....."},
  {'6', "-...."},
  {'7', "--..."},
  {'8', "---.."},
  {'9', "----."}
};
static const uint8_t morseDataSize = sizeof(morseData)/sizeof(*morseData);

#endif /* SRC_MORSE_H_ */

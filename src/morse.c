/*
 * morse.c
 *
 *  Created on: 28 gru 2020
 *      Author: SHON
 */


#include "morse.h"




void charToLowerCase(char* s){
  if(*s>=65 && *s<=90){
    *s=*s+32;
    return;
  }
}


void showCharInMorseCode(char *s){
    char a = *s;
    charToLowerCase(&a);



    if(a == ' '){//SPACJA
        Delay(MORSE_SPACE_BREAKE);
        return;
    }

    char *symbol;
    for(uint8_t q=0; q<morseDataSize ;q++){
        if(a == morseData[q].character){
            symbol = (char*) morseData[q].data;
            break;
        }
    }

    for(char *mark = symbol; *mark ; mark++){
        if(*mark == '.')
            showDot();
        else if(*mark == '-')
            showLine();

       // if(*(mark+1))
          Delay(MORSE_SIGN_ELEMENTS_BREAKE);

    }

}

void showStringInMorseCode(char *a){
    for(char *mark = a; *mark ; mark++){
        showCharInMorseCode(mark);

        //if(*(mark+1) != ' ' && *mark != ' ')
            Delay(MORSE_SIGN_BREAKE);

    }
}

void showDot(){
  GPIO_PinOutSet(BSP_GPIO_LED0_PORT, BSP_GPIO_LED0_PIN);
  Delay(MORSE_DOT_LEN);
  GPIO_PinOutClear(BSP_GPIO_LED0_PORT, BSP_GPIO_LED0_PIN);
}
void showLine(){
  GPIO_PinOutSet(BSP_GPIO_LED0_PORT, BSP_GPIO_LED0_PIN);
  Delay(MORSE_LINE_LEN);
  GPIO_PinOutClear(BSP_GPIO_LED0_PORT, BSP_GPIO_LED0_PIN);
}


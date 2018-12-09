/******************************************************************
 Created with PROGRAMINO IDE for Arduino - 15.09.2016 06:12:58
 Libraries   :
 Author      :
 Description :
******************************************************************/


#ifndef Morse_h
#define Morse_h
    
#include "Arduino.h"
    
class Morse
{
public:
Morse(int pin);
void dot();
void dash();
private:
int _pin;
};
    
#endif

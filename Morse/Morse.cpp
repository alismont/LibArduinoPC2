/******************************************************************
 Created with PROGRAMINO IDE for Arduino - 15.09.2016 06:13:25
 Project     :
 Libraries   :
 Author      :
 Description :
******************************************************************/

#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
pinMode(pin, OUTPUT);
_pin = pin;
}

void Morse::dot()
{
digitalWrite(_pin, HIGH);
delay(250);
digitalWrite(_pin, LOW);
delay(250); 
}

void Morse::dash()
{
digitalWrite(_pin, HIGH);
delay(1000);
digitalWrite(_pin, LOW);
delay(250);
}

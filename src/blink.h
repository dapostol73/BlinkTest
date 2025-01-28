#ifndef _BLINK_H_
#define _BLINK_H_

#include <Arduino.h>

void setupLed()
{
    pinMode(BUILTIN_LED, OUTPUT);
}

void blinkLed(int delayms, int repeat)
{
    for (int i = 0; i < repeat; i++)
    {
        digitalWrite (BUILTIN_LED, HIGH);	// turn on the LED
        delay(delayms);	// wait for half a second or 500 milliseconds
        digitalWrite (BUILTIN_LED, LOW);	// turn off the LED
        delay(delayms);	// wait for half a second or 500 milliseconds
    }
}

#endif
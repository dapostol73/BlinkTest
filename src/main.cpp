#include <Arduino.h>

#ifdef GENERIC_STM32_F103C8T6
    #define BUILTIN_LED PC13
#endif

// put function declarations here:
void blinkLed(int delayms, int repeat);

void setup()
{
    pinMode(BUILTIN_LED, OUTPUT);
}

void loop()
{
    // put your main code here, to run repeatedly:
    blinkLed(500, 1);
    blinkLed(200, 2);
    blinkLed(100, 3);
}

// put function definitions here:
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

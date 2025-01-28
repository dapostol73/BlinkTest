#include <Arduino.h>

#ifdef RGBLED_BUILTIN
    #include "blinkNeo.h"
#else
    #include "blink.h"
#endif

void setup()
{
    setupLed();
}

void loop()
{
    // put your main code here, to run repeatedly:
    blinkLed(500, 1);
    blinkLed(200, 2);
    blinkLed(100, 3);
}

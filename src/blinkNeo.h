#ifndef _BLINK_NEO_H_
#define _BLINK_NEO_H_

#include <Arduino.h>
#include <FastLED.h>

#define NUM_LEDS 1
CRGB leds[NUM_LEDS];

void setupLed()
{
    FastLED.addLeds<NEOPIXEL, PIN_NEOPIXEL>(leds, NUM_LEDS);
}

void blinkLed(int delayms, int repeat)
{
    CRGB color = CRGB::Black;
    switch (random(0,4))
    {
        case 0:
            color = CRGB::Red;
            break;
        case 1:
            color = CRGB::Green;
            break;
        case 2:
            color = CRGB::Blue;
            break;
        case 3:
            color = CRGB::White;
            break;
        default:
            break;
    }

    for (int i = 0; i < repeat; i++)
    {
        leds[0] = color; // turn on the LED
        FastLED.show();
        delay(delayms);	// wait for half a second or 500 milliseconds
        leds[0] = CRGB::Black; // turn off the LED
        FastLED.show();
        delay(delayms);	// wait for half a second or 500 milliseconds
    }
}

#endif
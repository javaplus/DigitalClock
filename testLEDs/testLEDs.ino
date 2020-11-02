#include <FastLED.h>

#define LED_PIN     7
#define NUM_LEDS    128

CRGB leds[NUM_LEDS];

void setup() {

  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  
}

void loop() {

  for(int i=0; i < NUM_LEDS; i++){
    leds[i] = CRGB(0,0, 100);
    FastLED.show();  
    delay(500);  
  }
  
  
  
}

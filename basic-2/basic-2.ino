
#include <Adafruit_NeoPixel.h>

//Creating contant values to use in out program
#define PIN            6
#define NUMPIXELS      10

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() { 
  strip.begin(); // This initializes the NeoPixel library.
}

void loop() {
 for(int i=0;i<NUMPIXELS;i++){
    strip.setPixelColor(i, strip.Color(150,0,0)); // Moderately bright green color.
    strip.show(); // This sends the updated pixel color to the hardware.
    delay(500); // Delay for a period of time (in milliseconds). 500 ms = half second
  }
}


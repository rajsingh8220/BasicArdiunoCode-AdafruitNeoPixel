#include <Adafruit_NeoPixel.h>

// Creating Variables to use later
#define PIN            6
#define NUMPIXELS      10

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800); //num of pixel:10 and pin# 6


void setup() { 
  strip.begin(); // This initializes the NeoPixel library.
}

void loop() {
    strip.setPixelColor(0, strip.Color(0,150,0)); // Moderately bright green color.//pixel# 0
    strip.show(); // This sends the updated pixel color to the hardware

    strip.setPixelColor(1, strip.Color(0,150,0)); // Moderately bright green color.//pixel# 1
    strip.show(); // This sends the updated pixel color to the hardware
}

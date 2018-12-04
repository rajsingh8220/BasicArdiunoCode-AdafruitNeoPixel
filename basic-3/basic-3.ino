
#include <Adafruit_NeoPixel.h>

#define PIN            6
#define NUMPIXELS      10


Adafruit_NeoPixel stripe = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() { 
  stripe.begin(); // This initializes the NeoPixel library.
}

void loop() {
  for(int i=0;i<NUMPIXELS;i++){
    stripe.setPixelColor(i, stripe.Color(150,0,0)); // Moderately bright green color.//Red color
    stripe.show(); // This sends the updated pixel color to the hardware.
    delay(100); // Delay for a period of time (in milliseconds). 500 ms = half second
  }
}

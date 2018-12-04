//Brightness 50 (0-255) and color variable
//..........................................................................
#include <Adafruit_NeoPixel.h>

//Defining Constants
#define PIN            6
#define NUMPIXELS      10

//Variables....
char red = 0;
char green = 255;
char blue = 0;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() { 
  strip.begin(); // This initializes the NeoPixel library.
}

void loop() {
  for(int i=0;i<NUMPIXELS;i++){
    strip.setPixelColor(i, strip.Color(red,green,blue)); 
    strip.setBrightness(50);
    strip.show(); 
    delay(100);
  }
}


//Infinite Loop
#include <Adafruit_NeoPixel.h>

#define PIN            6 //Defining Constant
#define NUMPIXELS      10 //Defining Constant

int i = 0; //Defining Variable

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

//Firmware calls this method
void setup() { 
  strip.begin(); // This initializes the NeoPixel library.
}

//Always run in loop
void loop() {
  while(true){
    if(i==NUMPIXELS){
      i=0;
      reset_strip();
    }
    strip.setPixelColor(i, strip.Color(0,150,0)); // Moderately bright green color.//Red color
    strip.show(); // This sends the updated pixel color to the hardware.
    delay(100); // Delay for a period of time (in milliseconds). 500 ms = half second
    i=i+1;
  }
}

//Making All 10 pixels off
void reset_strip(){
  for(int j=0; j<NUMPIXELS; j++){
    strip.setPixelColor(j, strip.Color(0,0,0)); // Moderately bright green color.//Red color
    strip.show();
  }
}


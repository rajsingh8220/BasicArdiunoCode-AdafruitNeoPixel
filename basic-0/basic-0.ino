//Light up the first pixel
//...............................................
#include <Adafruit_NeoPixel.h>

//Create new LED stripe
Adafruit_NeoPixel strip = Adafruit_NeoPixel(10, 6, NEO_GRB + NEO_KHZ800); //num of pixel:10 and pin# 6

//First called when firmware loads...system method
void setup() { 
  strip.begin(); // This initializes the NeoPixel library.
}

//Always called in loop...system method
void loop() {
    strip.setPixelColor(0, strip.Color(0,150,0)); // Moderately bright green color.//pixel# 0
    strip.show(); // This sends the updated pixel color to the hardware

}

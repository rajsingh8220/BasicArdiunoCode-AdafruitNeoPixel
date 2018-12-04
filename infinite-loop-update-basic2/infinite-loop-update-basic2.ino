
//Library that we need to include
#include <Adafruit_NeoPixel.h>
//..............................

int i=0;

//Creating new LED Strip with 10 pixels and on ardiuno pin number 6
Adafruit_NeoPixel stripe = Adafruit_NeoPixel(10, 6, NEO_GRB + NEO_KHZ800);

void setup() { 
  stripe.begin(); // This initializes the NeoPixel library.
}

void loop() {
  while(true){
    if(i==10){
      i=0;
      reset();
    }
    stripe.setPixelColor(i, stripe.Color(0,150,0)); // Moderately bright green color.
    stripe.show(); // This sends the updated pixel color to the hardware.
    delay(500); // Delay for a period of time (in milliseconds). 500 ms = half second
    i=i+1;
  }
}

void reset(){
   for(int j=0; j<10; j++){
    stripe.setPixelColor(j, stripe.Color(0,0,0));
    stripe.show();
   }
}


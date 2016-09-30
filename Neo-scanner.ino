#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(8, D3, NEO_GRB + NEO_KHZ800);
// 1 pixel, pin #D3
void setup() {

pixels.begin();
}

void loop() {

for(int i=0; i<8; i++){
  pixels.setPixelColor(i,pixels.Color(10,0,5));
  pixels.setPixelColor(i-1,pixels.Color(0,0,0));
  pixels.show();
  delay(50);
}
delay(400);

for(int i=7; i>=0; i--){
  pixels.setPixelColor(i,pixels.Color(0,10,0));
  pixels.setPixelColor(i+1,pixels.Color(0,0,0));
  pixels.show();
  delay(50);
}
delay(400);

}

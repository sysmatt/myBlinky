// Fancy NeoPixel Blinky Blinker

#include <Adafruit_NeoPixel.h>
#define PIN_LED 14

Adafruit_NeoPixel strip = Adafruit_NeoPixel(1, PIN_LED, NEO_GRB + NEO_KHZ800);

void setup() {
	strip.begin();
}

void loop() {
	
	strip.setPixelColor(0,strip.Color(255,0,0)); strip.show();
	delay(200);
	strip.setPixelColor(0,strip.Color(0,255,0)); strip.show();
	delay(200);
	strip.setPixelColor(0,strip.Color(0,0,255)); strip.show();
	delay(200);
}

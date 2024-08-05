#define PIN 6        // пин DI
#define NUM_LEDS 150   // число диодов
#include "Adafruit_NeoPixel.h"
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  strip.begin();
  strip.setBrightness(255);    // яркость, от 0 до 255
  strip.clear();                          // очистить
  strip.show();                           // отправить на ленту
}
void loop() {
    for (int i = 0; i < 150; i++ ) {         // 50 раз
    strip.setPixelColor(i, 465165);     // залить жёлтым
    strip.show();                         // отправить на ленту
    delay(100);
  }
  // заливаем трёмя цветами плавно
//  for (int i = 0; i < NUM_LEDS / 3; i++ ) {   // от 0 до первой трети
//    strip.setPixelColor(i, 0xff0000);     // залить зелёным
//    strip.show();                         // отправить на ленту
//    delay(100);
//  }
//  for (int i = NUM_LEDS / 3; i < NUM_LEDS * 2 / 3; i++ ) {   // от 1/3 до 2/3
//    strip.setPixelColor(i, 0x00ff00);     // залить красным
//    strip.show();                         // отправить на ленту
//    delay(100);
//  }
//  for (int i = NUM_LEDS * 2 / 3; i < NUM_LEDS; i++ ) {   // от 2/3 до конца
//    strip.setPixelColor(i, 0x0000ff);     // залить синим
//    strip.show();                         // отправить на ленту
//    delay(100);
//  }
//  delay(1000);
//  // заливаем белым
//  for (int i = 0; i < NUM_LEDS; i++ ) {   // всю ленту
//    strip.setPixelColor(i, 0xffffff);     // залить белым
//    strip.show();                         // отправить на ленту
//    delay(10);
//  }
//  delay(1000);
//  // заливаем чёрным
//  for (int i = 0; i < NUM_LEDS; i++ ) {   // всю ленту
//    strip.setPixelColor(i, 0x000000);     // залить чёрным
//    strip.show();                         // отправить на ленту
//    delay(10);
//  }
//  delay(1000);
//  // включаем случайные диоды жёлтым
//  for (int i = 0; i < 50; i++ ) {         // 50 раз
//    strip.setPixelColor(random(0, NUM_LEDS), 0xffff00);     // залить жёлтым
//    strip.show();                         // отправить на ленту
//    delay(500);
//  }
}

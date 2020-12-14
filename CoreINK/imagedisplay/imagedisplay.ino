#include "M5CoreInk.h"
#include "image_zhifei.h"

void setup()
{
    M5.begin();
    digitalWrite(LED_EXT_PIN,LOW);
    Serial.begin(115200);

    M5.M5Ink.clear();
    M5.M5Ink.drawBuff((uint8_t *)image_zhifei);
}

void loop()
{
  if( M5.BtnPWR.wasPressed()){
     M5.M5Ink.clear();
     M5.M5Ink.drawBuff((uint8_t *)image_zhifei);
     M5.PowerDown();
  }
  M5.update();
}

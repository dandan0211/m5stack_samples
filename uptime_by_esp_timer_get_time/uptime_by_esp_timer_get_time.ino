#include "M5Stack.h"

void setup()
{
  M5.begin();
  M5.Lcd.fillScreen(0x0000);
}

void loop()
{
  int64_t  uptime;
  uptime = esp_timer_get_time();

  M5.Lcd.setTextFont(4);
  M5.Lcd.setCursor(20, 20);
  M5.Lcd.printf("millis(): %d", millis());
  
  M5.Lcd.setCursor(20, 50);
  M5.Lcd.printf("esp_timer_get_time:");
  M5.Lcd.setCursor(20, 80);
  M5.Lcd.printf("%d", uptime % 1000);

  delay(10);
}

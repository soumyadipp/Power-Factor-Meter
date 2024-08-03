
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "EmonLib.h"
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

EnergyMonitor emon1;
#define OLED_RESET     -1
#define SCREEN_ADDRESS 0x3C
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
int i = 0;
void setup()
{
  Serial.begin(9600);
  Serial.println("SSD1306 allocation failed");
  emon1.voltage(27,1057, 1.7);
  emon1.current(26,17.8 );
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }


  display.display();
  delay(2000);


  display.clearDisplay();


  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 16);
  display.print("   POWER     FACTOR    METER");

  display.display();
  delay(2500);
  display.clearDisplay();
  delay(500);

  for (i = 10; i <= 100; i = i + 10)
  { display.clearDisplay();
    display.drawRoundRect(12, 20, 104, 20, 10 , WHITE);
    display.fillRoundRect(14, 23, i, 14, 10, WHITE);
    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.setCursor(30, 50);
    display.print("Loading ");
    display.print(i);
    display.print("%");
    display.display();

    emon1.calcVI(20, 1000);
    emon1.serialprint();

    float realPower       = emon1.realPower;
    float apparentPower   = emon1.apparentPower;
    float powerFActor     = emon1.powerFactor;
    float supplyVoltage   = emon1.Vrms;
    float Irms            = emon1.Irms;
  }
  display.clearDisplay();
}




void loop()
{
  emon1.calcVI(20, 1000);
  emon1.serialprint();
  float realPower       = emon1.realPower;
  float apparentPower   = emon1.apparentPower;
  float powerFActor     = emon1.powerFactor;
  float supplyVoltage   = emon1.Vrms;
  float Irms            = emon1.Irms;
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);

  display.setCursor(0, 0);
  display.print("P:");
  display.print(realPower);
  display.setCursor(0, 16);
  display.print("V:");
  display.print(supplyVoltage);
  display.setCursor(0, 32);
  display.print("I:");
  display.print(Irms);
  display.setCursor(0, 48);
  display.print("PF:");
  display.print(powerFActor);

  display.display();
  delay(200);
  display.clearDisplay();
}

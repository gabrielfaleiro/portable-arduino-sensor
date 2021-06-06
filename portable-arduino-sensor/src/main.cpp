#include <Arduino.h>
#include "SDigLedDisplay.h"
#include <math.h>

#define SLDD_LED_A 2
#define SLDD_LED_B 3
#define SLDD_LED_C 4
#define SLDD_LED_D 7
#define SLDD_LED_E 8
#define SLDD_LED_F 12
#define SLDD_LED_G 13

const int AirValue = 580;   //you need to replace this value with Value_1
const int WaterValue = 270;  //you need to replace this value with Value_2

SDigLedDisplay ledDisplay;

void setup() {
    Serial.begin(9600); // open serial port, set the baud rate to 9600 bps
    pinMode(A0, INPUT);
    ledDisplay.setup(SLDD_LED_A,
                     SLDD_LED_B,
                     SLDD_LED_C,
                     SLDD_LED_D,
                     SLDD_LED_E,
                     SLDD_LED_F,
                     SLDD_LED_G);
}
void loop() {
  int soilMoistureValue = 0;
  int soilmoisturepercent = 0;

  soilMoistureValue = analogRead(A0);  //put Sensor insert into soil
  Serial.println(soilMoistureValue);

  // Linear interpolation
  soilmoisturepercent = map(soilMoistureValue, AirValue, WaterValue, 0, 100);
  if      (soilmoisturepercent > 100){ soilmoisturepercent = 100; }
  else if (soilmoisturepercent < 0  ){ soilmoisturepercent = 0;   }

  ledDisplay.printInt(round(((float)soilmoisturepercent)/10));
  Serial.print(soilmoisturepercent);
  Serial.println("%");
    
  delay(250);
}
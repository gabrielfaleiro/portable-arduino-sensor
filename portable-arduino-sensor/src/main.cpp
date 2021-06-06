#include <Arduino.h>
#include "SDigLedDisplay.h"
#include <math.h>

const int AirValue = 580;   //you need to replace this value with Value_1
const int WaterValue = 270;  //you need to replace this value with Value_2

SDigLedDisplay ledDisplay;

void setup() {
    Serial.begin(9600); // open serial port, set the baud rate to 9600 bps
    pinMode(A0, INPUT);
    ledDisplay.setup();
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
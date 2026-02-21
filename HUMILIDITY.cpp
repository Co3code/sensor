#include <dhtnew.h>

#include "dhtnew.h"   // use quotes (safer for custom libraries)

#define DHT11PIN 4

DHTNEW mySensor(DHT11PIN);

void setup() {
  Serial.begin(9600);

  // Optional but recommended: force DHT11 type
  mySensor.setType(11);   // 11 = DHT11
}

void loop() {
  int chk = mySensor.read();

  if (chk == DHTLIB_OK) {
    Serial.print("Humidity (%): ");
    Serial.print(mySensor.getHumidity(), 2);

    Serial.print("  Temperature (C): ");
    Serial.println(mySensor.getTemperature(), 2);
  } 
  else {
    Serial.print("Sensor error: ");
    Serial.println(chk);
  }

  delay(2000);
}
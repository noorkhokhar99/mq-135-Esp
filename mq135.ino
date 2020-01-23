#include <MQ135.h>
#include "ESP_MICRO.h" // importing our library


/*
  Example sketch for the MQ135 gas sensor library.
  Created by Noor khokhar, 2019
  MIT license
*/

#include <MQ135.h>

MQ135 mq135(A0); // Initializes the MQ135 gas sensor connected to A0 pin.

unsigned int co2;

void setup() {
  Serial.begin(9600);

 // start("poulta","dignous123");  // Wifi details connect to
  start("junaid","1234apple");  // Wifi details connect to

  //delay(10000);

}

void loop() {
  waitUntilNewReq();
  co2 = mq135.getCO2(); // Gets CO2 concentration in ppm. Call as often as possible (as it also handles automatic baseline calibration on background).
 // Serial.print("CO2: ");
  Serial.println((co2));
 // Serial.println(" ppm");
 // delay(1000);
  returnThisInt(co2); //Returns the data to python
}

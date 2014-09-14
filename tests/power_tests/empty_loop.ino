#include "LowPower.h"

// setup()
void setup() {
    Serial.begin(9600); // Initialisation du port série
}
 
// loop()
void loop() {
  Serial.print("coucou");
  LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);  
}

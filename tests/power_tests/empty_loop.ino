#include "LowPower.h"

int led = 13;

// setup()
void setup() {
    pinMode(led, OUTPUT);     
    Serial.begin(9600); // Initialisation du port série
}
 
// loop()
void loop() {
  Serial.print("coucou");
  digitalWrite(led, LOW);   // turn the LED on (HIGH is the voltage level)
  LowPower.powerDown(SLEEP_1S, ADC_ON, BOD_ON);  
  digitalWrite(led, HIGH);    // turn the LED off by making the voltage LOW
  LowPower.powerDown(SLEEP_1S, ADC_ON, BOD_ON);  
}


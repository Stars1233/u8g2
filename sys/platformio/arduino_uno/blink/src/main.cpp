#include <Arduino.h>

void setup() {
  // Set digital pin LED_BUILTIN (Pin 13) as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Turn the LED on
  delay(1000);                     // Wait for a second
  digitalWrite(LED_BUILTIN, LOW);  // Turn the LED off
  delay(1000);                     // Wait for a second
}
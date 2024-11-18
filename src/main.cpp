#include <Arduino.h>

void setup() {
  pinMode(34, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(1);
  int light = analogRead(34);
  Serial.print("Light = ");
  Serial.println(light);
}
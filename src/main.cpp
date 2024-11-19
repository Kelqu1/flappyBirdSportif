#include <Arduino.h>

int nombrePas = 0;
int lightAncienne = 0;

void setup() {
  pinMode(34, INPUT);
  Serial.begin(9600);
  Serial.println("démarage");
}

void loop() {
  int lightActuelle = analogRead(34);
  lightAncienne = lightActuelle;
  lightActuelle = analogRead(34);
  if (lightActuelle >0 && lightAncienne == 0) {
      Serial.println("un est pas détecté");
      nombrePas++;
      Serial.print("Nombre de pas: ");
      Serial.println(nombrePas);
  }
  delay(10);  
}
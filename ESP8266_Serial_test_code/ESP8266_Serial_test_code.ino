void setup() {
  // definiramo serijski monitor baud 115200
Serial.begin(115200);
}

void loop() {
  // izpisemo Testno sporocilo
  Serial.println("Testno sporocilo");
  delay(2000); // počakamo 2 sekunde

 //izpisemo ESP8266
  Serial.println("ESP8266");
  delay(2000); // počakamo 2 sekunde
}

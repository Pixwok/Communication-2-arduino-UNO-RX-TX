void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0)
  {
    String consommation = Serial.readString();
    Serial.print(consommation);
  }
}

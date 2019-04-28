//ARDUINO 1

float consommation = 100.5;
String consommation_convert;

void setup() {
  Serial.begin(9600);
}

void loop() {
  consommation_convert = String(consommation);
  Serial.print(consommation_convert);
}

int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  float temperature = sensorValue * (5.0 / 1024.0) * 100;
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");
  delay(1000);
}

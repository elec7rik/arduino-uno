int potPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);
  Serial.print("Potentiometer value: ");
  Serial.println(potValue);
  delay(500);
}

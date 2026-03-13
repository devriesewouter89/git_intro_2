void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(34200);
}

void loop() {
  for (int j = 0; j < 16; j++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(5000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
  }
  Serial.println("Hello World");
  delay(2000);
}
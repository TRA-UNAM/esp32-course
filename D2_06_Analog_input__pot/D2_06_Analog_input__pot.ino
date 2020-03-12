const byte POT = 13;

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println(analogRead(POT));
}

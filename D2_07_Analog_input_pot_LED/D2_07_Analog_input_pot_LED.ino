const byte POT = 13;
const byte LED = 12;
int value;

void setup() {
  ledcAttachPin(LED, 0);
  ledcSetup(0, 4000, 12);
}

void loop() {
  value= analogRead(POT);
  ledcWrite(0, value);
  
  
}

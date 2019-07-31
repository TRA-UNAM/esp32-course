//Fórmula para el cálculo de distancia tomada de:
//https://github.com/sparkfun/simple_sketches/blob/master/sharp/sharp.inohttps://github.com/sparkfun/simple_sketches/blob/master/sharp/sharp.ino

void setup() {
  // put your setup code here, to run once:
  analogReadResolution(10); //Establecemos la resolución de 10 bits en arduino para que cuadre con el cálculo (de un programa que funiona con arduino)
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int reading = analogRead(34);           //sharp sensor conected to the GPIO34
  int calculated = (6762/(reading-9))-4;  //Es calculado con la lectura del ADC de 10bits del arduino

  Serial.println(calculated);
  delay(200);
}

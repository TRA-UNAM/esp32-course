/*
 * Programa para leer el sensor de efecto hall embebido en la ESP32
 * Utilizar el "serial plotter" para visualizar la salida
 */

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("-250," +String(hallRead()) + ",250");   //Se agregan los valores para reflejar un cambio en la escala del "serial plotter"
  
  delay(25);
}

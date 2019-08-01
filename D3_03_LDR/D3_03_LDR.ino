/*Programa para leer el voltaje de salida de un Divisor de voltaje
 *con una fotoresistencia (LDR) conectada al pin 12 de la ESP32 
 *
*/
const int LDR = 12;   

void setup() {
  // put your setup code here, to run once:
  analogReadResolution(10);   //Función que ajusta la resolución del ADC a 10 bits (valores de 0 a 1023)  
  // analogSetWidth(8); //una variante
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(LDR));  //Simplemente se imprime el valor que se lee
                                    //la resistencia DISMINUYE con el incremento de la luz incidente
}

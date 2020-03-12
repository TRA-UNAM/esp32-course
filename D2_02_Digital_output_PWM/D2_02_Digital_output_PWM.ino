 
const byte LED = 13; 
int brightness = 255;

void setup() {
  //Asignamos un canal al pin del LED
  //Hay 16 canales, del 0 al 15
  ledcAttachPin(LED, 0); 
  
  // Configuramos los canales
  // ledcSetup(canal, frecuencia, bits_de_resolucíon);
  // canales 0-15, 12 kHz, resolución 1-16 bits, frecuencia límite dependerá de la resolución
  ledcSetup(0, 6000, 8); 
  
}


void loop() {
  /*ledcWrite(0, 0); 
  delay(1000);
  ledcWrite(0, brightness/2); 
  delay(1000);*/
  ledcWrite(0, brightness/2); 
  delay(1000);
  
}

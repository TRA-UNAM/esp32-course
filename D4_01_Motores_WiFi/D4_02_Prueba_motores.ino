const byte PWM1 = 17; // the PWM pin the LED is attached to
const byte PWM2 = 16; // the PWM pin the LED is attached to


int velIzq = 128;    
int velDer = 128;    

void setup() {
  //Asignamos un canal a cada pin del LED
  //Hay 16 canales, del 0 al 15
  ledcAttachPin(PWM1, 0); 
  ledcAttachPin(PWM2, 1); 
  
  // Configuramos los canales
  // ledcSetup(canal, frecuencia, bits_de_resolucíon);
  // canales 0-15, 12 kHz, resolución 1-16 bits, frecuencia límite dependerá de la resolución
  ledcSetup(0, 8000, 8); 
  ledcSetup(1, 8000, 8);
  
  ledcWrite(0, velIzq); 
  ledcWrite(1, velDer); 
}


void loop() {
  Alto();
  delay(1000);
  /*Forward();
  delay(1000);
  //Backward();
  delay(1000);*/
  Right();
  delay(1000);
  Alto();
  delay(1000);
  Left();
  delay(1000);
  
  

}

void Alto(){
  velIzq = 128;    
  velDer = 128;      
  ledcWrite(0, velDer); 
  ledcWrite(1, velIzq); 
}

void Forward(){
  velIzq = 0;    
  velDer = 255;
  ledcWrite(0, velDer); 
  ledcWrite(1, velIzq); 
}

void Backward(){
  velIzq = 255;    
  velDer = 0;
  ledcWrite(0, velDer); 
  ledcWrite(1, velIzq); 
}

void Right(){
  velIzq = 0;    
  velDer = 0;
  ledcWrite(0, velDer); 
  ledcWrite(1, velIzq); 
}

void Left(){
  velIzq = 255;    
  velDer = 255;
  ledcWrite(0, velDer); 
  ledcWrite(1, velIzq); 
}

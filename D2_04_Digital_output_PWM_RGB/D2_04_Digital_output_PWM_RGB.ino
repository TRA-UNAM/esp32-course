//Nombrar a los pines que irán en a cada terminal del LED RGB
uint8_t ledR = 12;
uint8_t ledG = 14;
uint8_t ledB = 27;

void setup() 
{            
  ledcAttachPin(ledR, 1); 
  ledcAttachPin(ledG, 2);
  ledcAttachPin(ledB, 3);
  
  ledcSetup(1, 12000, 8); 
  ledcSetup(2, 12000, 8);
  ledcSetup(3, 12000, 8);
}


void loop() 
{
  //Blanco
  ledcWrite(1, 255);
  ledcWrite(2, 255);
  ledcWrite(3, 255);
  delay(1000);
  
  //Apagado
  ledcWrite(1, 0);
  ledcWrite(2, 0);
  ledcWrite(3, 0);
  delay(1000);
  
  //Rojo
  ledcWrite(1, 255);
  ledcWrite(2, 0);
  ledcWrite(3, 0);
  delay(1000);
  
  //Verde
  ledcWrite(1, 0);
  ledcWrite(2, 255);
  ledcWrite(3, 0);
  delay(1000);
  
  //Azul
  ledcWrite(1, 0);
  ledcWrite(2, 0);
  ledcWrite(3, 255);
  delay(1000);
  
  //Amarillo
  ledcWrite(1, 255);
  ledcWrite(2, 255);
  ledcWrite(3, 0);
  delay(1000);
  
  //Rosa
  ledcWrite(1, 255);
  ledcWrite(2, 0);
  ledcWrite(3, 255);
  delay(1000);
  
  //Cyan
  ledcWrite(1, 0);
  ledcWrite(2, 255);
  ledcWrite(3, 255);
  delay(1000);
}

 

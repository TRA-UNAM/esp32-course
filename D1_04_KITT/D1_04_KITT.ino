/*Blink_todos los LEDs*/

/*En este programa se activarán todos los pines como salidas digitales, se hará una pausa,
 se apagarán y se hará otra pausa en un ciclo infinito*/

/*Se declaran todos los pines GPIO en sentido antihorario iniciando con el pin inferior de la derecha*/


const byte LED1 = 27;
const byte LED2 = 14;
const byte LED3 = 12;
const byte LED4 = 13;


void setup() {
  // Se define que se usarán los pines como salidas.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}


void loop() {
  // Estado 1
  digitalWrite(LED2, LOW);    
  digitalWrite(LED1, HIGH);   
  delay(100);         
  // Estado 2
  digitalWrite(LED1, LOW);    
  digitalWrite(LED2, HIGH);
  delay(100);
  // Estado 3
  digitalWrite(LED2, LOW);    
  digitalWrite(LED3, HIGH);
  delay(100);
  // Estado 4
  digitalWrite(LED3, LOW);    
  digitalWrite(LED4, HIGH);
  delay(100);
  // Estado 5
  digitalWrite(LED4, LOW);    
  digitalWrite(LED3, HIGH);
  delay(100);
  // Estado 6
  digitalWrite(LED3, LOW);    
  digitalWrite(LED2, HIGH);
  delay(100);
  
  
}

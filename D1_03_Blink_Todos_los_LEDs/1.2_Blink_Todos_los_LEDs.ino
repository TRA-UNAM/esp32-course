/*Blink_todos los LEDs*/

/*En este programa se activarán todos los pines como salidas digitales, se hará una pausa,
 se apagarán y se hará otra pausa en un ciclo infinito*/

/*Se declaran todos los pines GPIO en sentido antihorario iniciando con el pin inferior de la derecha*/

const byte LED1 = 16;
const byte LED2 = 17;
const byte LED3 = 4;
const byte LED4 = 0;
const byte LED5 = 2;
const byte LED6 = 15;
const byte LED7 = 5;
const byte LED8 = 18;
const byte LED9 = 23;
const byte LED10 = 19;
const byte LED11 = 22;
const byte LED12 = 3;
const byte LED13 = 1;
const byte LED14 = 21;
const byte LED15 = 32;
const byte LED16 = 33;
const byte LED17 = 25;
const byte LED18 = 26;
const byte LED19 = 27;
const byte LED20 = 14;
const byte LED21 = 12;
const byte LED22 = 13;


void setup() {
  // Se define que se usarán los pines como salidas.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED10, OUTPUT);
  pinMode(LED11, OUTPUT);
  pinMode(LED12, OUTPUT);
  pinMode(LED13, OUTPUT);
  pinMode(LED14, OUTPUT);
  pinMode(LED15, OUTPUT);
  pinMode(LED16, OUTPUT);
  pinMode(LED17, OUTPUT);
  pinMode(LED18, OUTPUT);
  pinMode(LED19, OUTPUT);
  pinMode(LED20, OUTPUT);
  pinMode(LED21, OUTPUT);
  pinMode(LED22, OUTPUT);
}


void loop() {
  // Se enciende cada LED con un nivel lógico de ALTO (En esta placa el voltaje es de 3.3V)
  digitalWrite(LED1, HIGH);   
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, HIGH);
  digitalWrite(LED9, HIGH);
  digitalWrite(LED10, HIGH);
  digitalWrite(LED11, HIGH);
  digitalWrite(LED12, HIGH);
  digitalWrite(LED13, HIGH);
  digitalWrite(LED14, HIGH);
  digitalWrite(LED15, HIGH);
  digitalWrite(LED16, HIGH);
  digitalWrite(LED17, HIGH);
  digitalWrite(LED18, HIGH);
  digitalWrite(LED19, HIGH);
  digitalWrite(LED20, HIGH);
  digitalWrite(LED21, HIGH);
  digitalWrite(LED22, HIGH);
  // Se hace una pausa
  delay(100);         
  // Se apaga cada LED con un nivel lógico de BAJO
  digitalWrite(LED1, LOW);    
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  digitalWrite(LED9, LOW);
  digitalWrite(LED10, LOW);
  digitalWrite(LED11, LOW);
  digitalWrite(LED12, LOW);
  digitalWrite(LED13, LOW);
  digitalWrite(LED14, LOW);
  digitalWrite(LED15, LOW);
  digitalWrite(LED16, LOW);
  digitalWrite(LED17, LOW);
  digitalWrite(LED18, LOW);
  digitalWrite(LED19, LOW);
  digitalWrite(LED20, LOW);
  digitalWrite(LED21, LOW);
  digitalWrite(LED22, LOW);
  // Se hace una pausa
  delay(100);
}

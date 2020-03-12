/*  04.020 - ESP32 Digital out PWM LED example
 * 
 * This sketch shows you how to use the PWM output capability of the ESP32.
 * 
 * This sketch was written by Peter Dalmaris using information from the 
 * ESP32 datasheet and examples.
 * 
 * 
 * Components
 * ----------
 *  - ESP32 Dev Kit v4
 *  - LED
 *  - 320 Ohm resistor
 *  
 *  IDE
 *  ---
 *  Arduino IDE with ESP32 Arduino Code 
 *  (https://github.com/espressif/arduino-esp32)
 *  
 *  
 *  Libraries
 *  ---------
 *  - None
 *  - 
 *
 * Connections
 * -----------
 *  
 *  ESP32 Dev Kit |     LED
 *  ------------------------------
 *        GND      |       Cathode
 *        GPIO32   |       Anode via resistor
 *     
 * 
 *  
 *  It is possible to use any other PWM-capable GPIO.
 *  
 *  Other information
 *  -----------------
 *  
 *  1. ledc.h source code: https://github.com/espressif/arduino-esp32/blob/master/cores/esp32/esp32-hal-ledc.h
 *  2. ESP32 Datasheet: https://www.espressif.com/sites/default/files/documentation/esp32_datasheet_en.pdf
 *  
 *  Created on March 14 2019 by Peter Dalmaris
 * 
 */
 
const byte LED1 = 2; // the PWM pin the LED is attached to
const byte LED2 = 15; // the PWM pin the LED is attached to
const byte LED3 = 4; // the PWM pin the LED is attached to
const byte LED4 = 5; // the PWM pin the LED is attached to


int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

void setup() {
  //Asignamos un canal a cada pin del LED
  //Hay 16 canales, del 0 al 15
  ledcAttachPin(LED1, 0); 
  ledcAttachPin(LED2, 1); 
  ledcAttachPin(LED3, 3); 
  ledcAttachPin(LED4, 15); 

  // Configuramos los canales
  // ledcSetup(canal, frecuencia, bits_de_resolucíon);
  // canales 0-15, 12 kHz, resolución 1-16 bits, frecuencia límite dependerá de la resolución
  ledcSetup(0, 8000, 1); 
  ledcSetup(1, 8000, 2);
  ledcSetup(3, 8000, 4);
  ledcSetup(15, 8000, 8);
}


void loop() {
  ledcWrite(0, brightness); 
  ledcWrite(1, brightness); 
  ledcWrite(3, brightness); 
  ledcWrite(15, brightness); 

  // incrementa o decrementa la iluminación
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}

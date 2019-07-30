/*
  Blink
  Example modified to work on the ESP32 Dev Module board for the ESP32 Course TRA 2019

  Turns an LED on for one second, then off for one second, repeatedly.
  
  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain. 

  http://www.arduino.cc/en/Tutorial/Blink
*/
const byte LED_2 = 2;     //GPIO 2 for the ESP32 Dev Module
                          //GPIO 5 for the ESP32 Thing of sparkfun

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin as an output.
  pinMode(LED_2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_2, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}

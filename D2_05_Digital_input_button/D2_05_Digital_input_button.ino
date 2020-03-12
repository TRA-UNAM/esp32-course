/*  04.040 - ESP32 Digital input with button example

   This sketch shows you how to read the state of a button using an ESP32.

   When the button is pressed, the LED turns on.

   When the button is depressed, the LED turns off.

   This sketch was written by Peter Dalmaris using information from the
   ESP32 datasheet and examples.


   Components
   ----------
    - ESP32 Dev Kit v4
    - LED
    - 320 Ohm resistor
    - Button
    - 10 KOhm resistor

    IDE
    ---
    Arduino IDE with ESP32 Arduino Code
    (https://github.com/espressif/arduino-esp32)


    Libraries
    ---------
    - None
    -

   Connections
   -----------

    Refer to wiring diagram for a visual wiring guide

    ESP32 Dev Kit |     Component
    ------------------------------
          GND      |    LED Cathode
          GPIO32   |    LED Anode via 320 Ohm resistor
          GPIO36   |    Button read pin, plus 10 KOhm pull-down resistor to GND
          GND      |    Button GND pin


    It is possible to use any other GPIO that can be configured as an output or input.
    This excludes GPIO 34, 35, 36, 37, 38, 39 (these only work as inputs).

    Other information
    -----------------

    1. ESP32 Datasheet: https://www.espressif.com/sites/default/files/documentation/esp32_datasheet_en.pdf

    Created on March 26 2019 by Peter Dalmaris

*/


const byte LED = 13;
const byte BUTTON = 5;

int buttonState = 0;     


void setup() {
  pinMode(LED, OUTPUT);

  pinMode(BUTTON, INPUT);
}


void loop() {
  buttonState = digitalRead(BUTTON);

  if (buttonState == HIGH) {
    // enciende LED
    digitalWrite(LED, HIGH);
  } else {
    // apaga LED:
    digitalWrite(LED, LOW);
  }
}

#include <WiFi.h>
#include <WebServer.h>

/* Put your SSID & Password */
const char* ssid = "Twinbot";  // Enter SSID here
const char* password = "12345678";  //Enter Password here

/* Put IP Address details */
IPAddress local_ip(192,168,1,1);
IPAddress gateway(192,168,1,1);
IPAddress subnet(255,255,255,0);

WebServer server(80);

uint8_t izquierda= 16;

uint8_t movimiento=0;

uint8_t derecha = 17;


void setup() {
  Serial.begin(115200);
  ledcAttachPin(izquierda, 1);
  ledcAttachPin(derecha, 2);

  ledcSetup(1, 12000, 8); // 12 kHz PWM, 8-bit resolution
  ledcSetup(2, 12000, 8);
  

  WiFi.softAP(ssid, password);
  WiFi.softAPConfig(local_ip, gateway, subnet);
  delay(100);
  
  server.on("/", handle_OnConnect);
  server.on("/adelante", handle_adelante);
  server.on("/atras", handle_atras);
  server.on("/izquierda", handle_izquierda);
  server.on("/derecha", handle_derecha);
  server.onNotFound(handle_NotFound);
  
  server.begin();
  Serial.println("HTTP server started");
}
void loop() {
  server.handleClient();
  switch(movimiento){
    case 5:
       ledcWrite(izquierda,127);
       ledcWrite(derecha,127);
       break;
    case 8:
       ledcWrite(izquierda,191);
       ledcWrite(derecha,191);
       break;
    case 2:
       ledcWrite(izquierda,64);
       ledcWrite(derecha,64);
       break;
    case 4:
       ledcWrite(izquierda,64);
       ledcWrite(derecha,191);
       break;
    case 6:
       ledcWrite(izquierda,191);
       ledcWrite(derecha,64);
       break;
    
  }
}

void handle_OnConnect() {
  movimiento=5;
  Serial.println("stop");
  server.send(200, "text/html", SendHTML()); 
}

void handle_izquierda() {
  movimiento=4; 
  Serial.println("izquierda");
  server.send(200, "text/html", SendHTML()); 
}

void handle_derecha() {
  movimiento=6;
  Serial.println("derecha");
  server.send(200, "text/html", SendHTML()); 

}

void handle_adelante() {
  movimiento=8;
  Serial.println("adelante");
  server.send(200, "text/html", SendHTML()); 

}

void handle_atras() {
  movimiento=2;
  Serial.println("atras");
  server.send(200, "text/html", SendHTML()); 

}


void handle_NotFound(){
  server.send(404, "text/plain", "Not found");
}

String SendHTML(){
  String ptr = "<!DOCTYPE html> <html>\n";
  ptr +="<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=no\">\n";
  ptr +="<title>Twin-bot Control</title>\n";
  ptr +="<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}\n";
  ptr +="body{margin-top: 50px;} h1 {color: #444444;margin: 50px auto 30px;} h3 {color: #444444;margin-bottom: 50px;}\n";
  ptr +=".button {display: block;width: 80px;background-color: #3498db;border: none;color: white;padding: 13px 30px;text-decoration: none;font-size: 25px;margin: 0px auto 35px;cursor: pointer;border-radius: 4px;}\n";
  ptr +=".button-left {position: absolute;top: 50%; left: 35%}\n";
  ptr +=".button-center {position: absolute;top: 50%; left: 50%}\n";
  ptr +=".button-right{position: absolute;top: 50%; left: 65%}\n";
  ptr +=".button-up{position: absolute;top: 35%; left: 50%}\n";
  ptr +=".button-down{position: absolute;top: 65%; left: 50%}\n";
  ptr +="p {font-size: 14px;color: #888;margin-bottom: 10px;}\n";
  ptr +="</style>\n";
  ptr +="</head>\n";
  ptr +="<body>\n";
  ptr +="<h1>ESP32 Web Server</h1>\n";
  ptr +="<h3>Using Access Point(AP) Mode</h3>\n";
   ptr +="<a class=\"button button-left\" href=\"/izquierda\"><-</a>\n";
   ptr +="<a class=\"button button-right\" href=\"/derecha\">-></a>\n";
   ptr +="<a class=\"button button-down\" href=\"/atras\">v</a>\n";
   ptr +="<a class=\"button button-up\" href=\"/adelante\">^</a>\n";
   ptr +="<a class=\"button button-center\" href=\"/\">stop</a>\n";

  return ptr;
}

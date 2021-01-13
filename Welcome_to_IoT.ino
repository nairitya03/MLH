#include <ESP8266WiFi.h>

WiFiServer server(80);



void setup() {
Serial.begin(9600);
WiFi.softAP("Embedded", "Cloud");

IPAddress MyIp = WiFi.softAPIP();
server.begin();
Serial.print("HTTP Server Started;");
Serial.print("IP Address: ");
Serial.println(MyIp);

}

void loop() {
WiFiClient client = server.available();
String request = client.readString();
Serial.println(request);

client.print(
  "HTTP/1.1 200 OK\r\n"
  "Content-Type: text/html\r\n"
  "connection: close\r\n"
  "Refresh: 10\r\n"
  "\r\n"
  );

String s = "";
s += "<center>";
s += "<h1>Welcome to Embedded Class</h1>";

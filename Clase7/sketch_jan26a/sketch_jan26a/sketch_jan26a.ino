#include <WiFi.h> // ESP32 WiFi Library
#include <WebServer.h> // WebServer Library for ESP32
#include <WebSocketsClient.h> // WebSocket Client Library for WebSocket
#include <ArduinoJson.h> // Arduino JSON Library

StaticJsonDocument<100> doc; // Allocate a static JSON document
const char* ssid = "GODO-2.4G"; // Wifi SSID
const char* password = "luis1624"; //Wi-FI Password
WebSocketsClient webSocket; // websocket client class instance
void setup() {
  // Connect to local WiFi
  WiFi.begin(ssid, password);
  Serial.begin(115200);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP()); // Print local IP address
  //address, port, and URL path
  webSocket.begin("http://cdtech-test-server.herokuapp.com/api/v1/users/login/555", 80, "/");
  // WebSocket event handler
  webSocket.onEvent(webSocketEvent);
  // if connection failed retry every 5s
  webSocket.setReconnectInterval(5000);
}

void loop() { 
  webSocket.loop();
}

void webSocketEvent(WStype_t type, uint8_t * payload, size_t length) {
  if (type == WStype_TEXT)
  {
    // deserialize incoming Json String
    DeserializationError error = deserializeJson(doc, payload); 
    if (error) { // Print erro msg if incomig String is not JSON formated
      Serial.print(F("deserializeJson() failed: "));
      Serial.println(error.c_str());
      return;
    }
    Serial.print(F("vacio: "));
  }
}

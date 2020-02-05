#include <ESP8266WiFi.h>
// Connect the original libs of Expressiff SDK 1.4.0
#ifdef ESP8266
extern "C" {
#include "ets_sys.h"
#include "os_type.h"
#include "osapi.h"
#include "mem.h"
#include "user_interface.h"
#include "cont.h"
}
#endif

#define WIFI_TX_POWER 0 // TX power of ESP module (0 -> 0.25dBm) (0...85)

void setup() {
#ifdef ESP8266
  system_phy_set_max_tpw(WIFI_TX_POWER); //set as lower TX power as possible
#endif
}

void loop(){
  
}


/*#include <ESP8266WiFi.h>

const char* ssid     = "abcd";
const char* password = "abcdefgh";

void setup(){
  Serial.begin(9600);
  //while(!Serial);
  delay(1000);
}

void loop(){
  WiFi.mode(WIFI_OFF);
  WiFi.forceSleepBegin();
  delay(1);
  delay(10000);
  
  WiFi.forceSleepWake();
  delay(1);
  
  //WiFi.setOutputPower(10);
  
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
  delay(500);
  }
  delay(10000);
}*/

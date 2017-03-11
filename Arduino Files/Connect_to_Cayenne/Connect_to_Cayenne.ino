#define CAYENNE_DEBUG         // Uncomment to show debug messages
#define CAYENNE_PRINT Serial  // Comment this out to disable prints and save space

#include "CayenneDefines.h"
#include "BlynkSimpleEsp8266.h"
#include "CayenneWiFiClient.h"

// Cayenne authentication token. This should be obtained from the Cayenne Dashboard.
char token[] = "your token took from Cayenne website";
// Your network name and password.
char ssid[] = "your wireless ssid";
char password[] = "your wireless password";

void setup()
{
  Serial.begin(9600);
  Cayenne.begin(token, ssid, password);
}

void loop()
{
  Cayenne.run();
}

# Connect esp8266 to Cayenne
Arduino Files For Connect esp8266 to Cayenne

This file is only test on NodeMCU V2 board, though that will support all esp8266 devices.
 
## Requirements
 * Arduino Software
 * Mircro-USB Cable
 * NodeMCU V2 Board or other esp8266
 
## Getting Started
 1. Download and Install Arduino IDE
 2. Under **File -> Preferences** add `http://arduino.esp8266.com/stable/package_esp8266com_index.json` to the **Additional Boards Manager URLs** field.
 3. Install the **esp8266** platform from **Tools -> Board -> Boards Manager**. 
 4. Download Library from this GitHub.
 5. Install the downloaded zip library from **Sketch -> Include Library -> Add .ZIP Library**.
 6. Connect your ESP8266 module to your computer using Micro-USB cable.
 7. Select your ESP8266 module and port from the **Tools** menu.
 
## Setup Cayenne
 1. Register you Cayenne account.
 2. Add Arduino Device ,then choose any Arduino Board and Shield.
 3. Remember your **Auth Token**.
 
## Connect esp8266 to Cayenne
 1. Open Folder **Arduino Files -> Connect_to_Cayenne** then open **Connect_to_Cayenne.ino**.
 2. Replace your **Auth Token** on `char token[] = "your token took from Cayenne website"`
 3. Replace your **wireless ssid and password** on `char ssid[] = "..." and char password[] = "..."`

#include <Arduino.h>
// I Aileen Velasco, 000805966 certify that this material is my original work. 
//No other person's work has been used without due acknowledgement. 
//I have not made my work available to anyone else.

unsigned long myTime;

void setup() {
  // put your setup code here, to run once:

  // start the USB serial monitor port
  Serial.begin(115200);

  Serial.println("\n\n============================================");
  Serial.println("\n\nHello, World!");
  Serial.println("\nAileen Velasco 000805966");
  Serial.printf("ESP8266 Chip ID: %08Xn", ESP.getChipId());
  Serial.printf("\nFlash Chip ID:  %08Xn", ESP.getFlashChipId());
  Serial.println("\n\n============================================");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Time: ");
  myTime = millis();

  Serial.println(String(myTime) + "ms");
  delay(2000);



}
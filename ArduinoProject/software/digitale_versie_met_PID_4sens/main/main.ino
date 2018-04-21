#include "motor.h"
#include "PID.h"
#include "SensorModule.h"
//RFID
  #include <Wire.h>
  #include <PN532_I2C.h>
  #include <PN532.h>
  #include <NfcAdapter.h>
  
  PN532_I2C pn532i2c(Wire);
  PN532 nfc(pn532i2c);

//Rijden en sturen ctes
Motor motor;
SensorModule leftsens;
SensorModule rightsens;
PID steeringPID;
unsigned long tijdelijk=0;
int interval=500;
double PIDvalue;

unsigned long currentMillis;
unsigned long previousMillis=0;
boolean searchStartPos;
boolean leftright; //Left= true, Right= false


void setup() {
  Serial.begin(250000);
  //RFID
  
  nfc.begin();

  uint32_t versiondata = nfc.getFirmwareVersion();
  if (! versiondata) {
    Serial.print("Didn't find PN53x board");
    while (1); // halt
  }
  // Got ok data, print it out!
  Serial.print("Found chip PN5"); Serial.println((versiondata>>24) & 0xFF, HEX); 
  Serial.print("Firmware ver. "); Serial.print((versiondata>>16) & 0xFF, DEC); 
  Serial.print('.'); Serial.println((versiondata>>8) & 0xFF, DEC);
  
  // Set the max number of retry attempts to read from a card
  // This prevents us from waiting forever for a card, which is
  // the default behaviour of the PN532.
  nfc.setPassiveActivationRetries(0xFF);
  
  // configure board to read RFID tags
  nfc.SAMConfig();
    
  Serial.println("Waiting for an ISO14443A card");
  //Rijden en sturen setup
  
  steeringPID = PID(15,0,12);
  motor = Motor();
  motor.start(60);
  leftsens = SensorModule(A0, A1, A2, A3);
  rightsens = SensorModule(8,9,A4,A5);
}

void loop() {  
  //########################### Rijden en sturen ########################
 //tijdelijk=tijdelijk +1;
 currentMillis=millis();
if (currentMillis - previousMillis >= interval){
    previousMillis=currentMillis;

    leftsens.RefreshValues(leftsens);
    rightsens.RefreshValues(rightsens);
    
    leftright=leftsens.LinksRechts(leftsens,rightsens);
    Serial.println("left=0/right=1");

    if (leftright){
      PIDvalue=leftsens.calculatePIDSituatie(steeringPID);
      Serial.println("Links");
    }else {
      PIDvalue=rightsens.calculatePIDSituatie(steeringPID);
      Serial.println("Rechts");

    }
    motor.rotate(PIDvalue,leftright);
    tijdelijk=0;
 }
 //################RFID##############
 boolean success;
  uint8_t uid[] = { 0, 0, 0, 0, 0, 0, 0 };  // Buffer to store the returned UID
  uint8_t uidLength;                        // Length of the UID (4 or 7 bytes depending on ISO14443A card type)
  
  // Wait for an ISO14443A type cards (Mifare, etc.).  When one is found
  // 'uid' will be populated with the UID, and uidLength will indicate
  // if the uid is 4 bytes (Mifare Classic) or 7 bytes (Mifare Ultralight)
  success = nfc.readPassiveTargetID(PN532_MIFARE_ISO14443A, &uid[0], &uidLength);
  
  if (success) {
    Serial.println("Found a card!");
    Serial.print("UID Length: ");Serial.print(uidLength, DEC);Serial.println(" bytes");
    Serial.print("UID Value: ");
    for (uint8_t i=0; i < uidLength; i++) 
    {
      Serial.print(" 0x");Serial.print(uid[i], HEX); 
    }
    Serial.println("");
    // Wait 1 second before continuing
    delay(1000);
  }
  else
  {
    // PN532 probably timed out waiting for a card
    Serial.println("Timed out waiting for a card");
  }
}




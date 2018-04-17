#include "motor.h"
#include "PID.h"
#include "SensorModule.h"
#include <SPI.h>

/*
//RFID ctes
constexpr uint8_t RST_PIN = 7;          // Configurable, see typical pin layout above
constexpr uint8_t SS_PIN = 10;          // Configurable, see typical pin layout above
//MFRC522 mfrc522(SS_PIN, RST_PIN);  // Create MFRC522 instance
*/

//Rijden en sturen ctes
Motor motor;
SensorModule leftsens;
SensorModule rightsens;
PID steeringPID;
unsigned long tijdelijk=0;
int interval=0;
double PIDvalue;

unsigned long currentMillis;
unsigned long previousMillis=0;
boolean searchStartPos;
boolean leftright; //Left= true, Right= false


void setup() {
/*  //RFID ctes
  while (!Serial);    // Do nothing if no serial port is opened (added for Arduinos based on ATMEGA32U4)
  SPI.begin();      // Init SPI bus
  mfrc522.PCD_Init();   // Init MFRC522
  mfrc522.PCD_DumpVersionToSerial();  // Show details of PCD - MFRC522 Card Reader details
  Serial.println(F("Scan PICC to see UID, SAK, type, and data blocks..."));
  */
  //Rijden en sturen setup
  Serial.begin(250000);
  steeringPID = PID(15,0,12);
  motor = Motor();
  motor.start(60);
  leftsens = SensorModule(A0, A1, A2, A3);
  rightsens = SensorModule(8,9,A4,A5);
}

void loop() {  //########################### Rijden en sturen ########################
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
/* //########################### Lezen RFID ########################
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) {
    return;
  }

  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) {
    return;
  }

  // Dump debug info about the card; PICC_HaltA() is automatically called
  mfrc522.PICC_DumpToSerial(&(mfrc522.uid));*/
}




#include <SoftwareSerial.h>
//#include "RFID.h"

#define RX 4
#define TX 5
SoftwareSerial myserial(RX, TX);


int count = 0;
int previousValue;
int currentValue;
unsigned long startTime, currentTime;
const double pi = 3.1415;
//RFID rfid;
uint8_t naamTag[]= { 0, 0, 0, 0, 0, 0, 0 };

#include <Wire.h>
#include <PN532_I2C.h>
#include <PN532.h>
#include <NfcAdapter.h>

PN532_I2C pn532i2c(Wire);
PN532 nfc(pn532i2c);
uint8_t _Tag[] = { 0, 0, 0, 0, 0, 0, 0 };

void setup()
{
  
  myserial.begin(9600);
  nfc.begin(); 
  myserial.print("hallo                                                                                         ddddddddddddddddddddddddddddd");
  nfc.setPassiveActivationRetries(0x01);
  nfc.SAMConfig();
  
  pinMode(2, INPUT);
  startTime = millis();
 // rfid = RFID();
  //rfid.RFIDSetup();
  myserial.print("Hallo begin van het einde van ons bachelor projectje");
}

void loop()
{
    //rfid.RFIDTag();
    //rfid.Tag();

  boolean success;
  uint8_t uid[] = { 0, 0, 0, 0, 0, 0, 0 };  // Buffer to store the returned UID
  uint8_t uidLength;                        // Length of the UID (4 or 7 bytes depending on ISO14443A card type)
  success = nfc.readPassiveTargetID(PN532_MIFARE_ISO14443A, &uid[0], &uidLength);

  if (success) {
    /*Serial.println("Found a card!");
    Serial.print("UID Length: "); Serial.print(uidLength, DEC); Serial.println(" bytes");
    Serial.print("UID Value: ");*/
    for (uint8_t i = 0; i < uidLength; i++)
    {
      //Serial.print(" 0x"); Serial.print(uid[i], HEX); 
      myserial.print(uid[i],HEX);
     
      
    }
    //Serial.println();
    myserial.println("tag toegevoegd");
    
  }

// ||||||||||||||||||||||||||||||||||| snelheid||||||||||||||||||

  currentValue = digitalRead(2);
  //Serial.println(currentValue);
  if (currentValue == 0 && previousValue == 1) {
    count += 1;
    //Serial.println(count);
  }
  
  if (count == 3) {
    
    unsigned long currentTime = millis();
    unsigned long ElapsedTime = currentTime - startTime;
    myserial.println("De snelheid is: " + String(3 * 6.9 * pi / ElapsedTime, 4));
    count = 0;
    startTime = currentTime;
  }
  previousValue = currentValue;

}


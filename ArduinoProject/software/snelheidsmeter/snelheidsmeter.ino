#include <SoftwareSerial.h>

#define RX 0
#define TX 1

SoftwareSerial myserial(RX,TX);
void setup()
{
    Serial.begin(9600);
    myserial.begin(9600);                              
    pinMode(2, INPUT);
}
void loop()
{
    //snelheid bepalen    
    unsigned long StartTime = millis();
    int count = 0;
    if(digitalRead(2) == 0){
      count++; 
    }
    
    if(count == 20){
      unsigned long CurrentTime = millis();
      unsigned long ElapsedTime = CurrentTime - StartTime;
      if(myserial.available() > 0){   
        myserial.println(String(20*6.9e-3/ElapsedTime,4));      
      }
    }
    
 
}


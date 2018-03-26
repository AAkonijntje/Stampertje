#include "motor.h"
#include "PID.h"
#include "SensorModule.h"

Motor motor;
SensorModule leftsens;
PID steeringPID;
int tijdelijk=0;
int interval=500;

unsigned long currentMillis;
unsigned long previousMillis=0;
boolean searchStartPos;


void setup() {
  Serial.begin(9600);
  steeringPID = PID(12,0,12);
  motor = Motor();
  motor.start(60);
  leftsens = SensorModule(A0, A1, A2, A3);
  rightsens = SensorModule(9,8,A4,A5);
}

void loop() {  
 
  
 //tijdelijk=tijdelijk +1;
 //currentMillis=millis();
 //if (currentMillis - previousMillis >= interval){
 //  previousMillis=currentMillis;
   //leftsens.printValues(steeringPID);
   tijdelijk=0;
    motor.rotate(leftsens.calculatePIDSituatie(steeringPID));
 //}
 
}




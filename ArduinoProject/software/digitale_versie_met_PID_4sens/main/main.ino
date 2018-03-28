#include "motor.h"
#include "PID.h"
#include "SensorModule.h"

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
  Serial.begin(250000);
  steeringPID = PID(15,0,12);
  motor = Motor();
  motor.start(60);
  leftsens = SensorModule(A0, A1, A2, A3);
  rightsens = SensorModule(8,9,A4,A5);
}

void loop() {  
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
 
}




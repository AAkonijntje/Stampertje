#include "motor.h"
#include "PID.h"
#include "SensorModule.h"

Motor motor;
SensorModule leftsens;
PID steeringPID;

boolean searchStartPos;


void setup() {
  Serial.begin(9600);
  steeringPID = PID(10,0,0);
  motor = Motor();
  motor.start(70);
  leftsens = SensorModule(A0, A1, A2, A3);
}

void loop() {  
  motor.rotate(leftsens.calculatePID(steeringPID));
  //leftsens.printValues(steeringPID);
  //delay(1000);
}



#include "motor.h"
#include "PID.h"
#include "LED.h"
#include "SensorModule.h"

Motor motor;
LED led;
PID steeringPID;
SensorModule leftsens;

boolean searchStartPos;


void setup() {
  Serial.begin(9600);

  motor = Motor();
  led = LED(3);
  steeringPID = PID(6, 0, 0);
  leftsens = SensorModule(A0, A1);
  searchStartPos = true;

  pinMode(A0, INPUT);//wit sensor: links
  pinMode(A1, INPUT);//zwart senor: rechts
}

void loop() {  
  if (searchStartPos){
    int W_ref = int(analogRead(A0)/341);
    int Z_ref = int(analogRead(A1)/341);

    Serial.print('W_REF: ');
    Serial.print(W_ref);
    Serial.print('\n');
    Serial.print('Z_REF: ');
    Serial.print(Z_ref);
    Serial.print('\n');

    if (W_ref == 0 and Z_ref == 2){
      searchStartPos = led.blinkLed(searchStartPos);
    } else {
      led.reinitialize();
    }
  } else {
    motor.start(70);
    motor.rotate(leftsens.calculatePID(steeringPID));
  } 
}




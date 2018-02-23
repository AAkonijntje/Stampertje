#include <Servo.h>
#include "motor.h"
//#include <TimerOne.h>

//toevoegen van motor 1&2
Motor motor1=Motor(1,255,3,12);
Motor motor2=Motor(1,255,11,13);
//toevoegen van sensorinput
int sensorinput1=0;
int sensorinput2=0;
//toevoegen van timer
//Timer timer;

int hoek=0;

void setup() {
  
Serial.begin(9600);
//setup Pinnen
pinMode(motor1.getSpeedPin(), OUTPUT);
pinMode(motor2.getSpeedPin(), OUTPUT);
pinMode(motor1.getDirectionPin(), OUTPUT);
pinMode(motor2.getDirectionPin(), OUTPUT);

pinMode(A0, INPUT);//links sensor
pinMode(A1, INPUT);//rechts senor
}

void loop() {
  sensorinput1=analogRead(A0);//L
  sensorinput2=analogRead(A1);//R
  Serial.print("L:");
  Serial.print(sensorinput1);
  Serial.print("   R:");
  Serial.print(sensorinput2);

  hoek=motor1.Hoekberekenen(sensorinput1,sensorinput2);
  Serial.print("Hoek:");
  Serial.print(hoek);
  Serial.print(" \n");

  motor1.Bijsturen(motor1, motor2, hoek);

  delay(15);

}

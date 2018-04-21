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



  digitalWrite(13, HIGH  );
  digitalWrite(12, HIGH);
  analogWrite(11,150);
  analogWrite(3,150);

}

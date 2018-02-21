#include "motor.h"

//toevoegen van motor 1&2
Motor motor1=Motor(1,255,3,12);
Motor motor2=Motor(1,255,11,13);
//toevoegen van sensorinput
int sensorinput1=0;
int sensorinput2=0;

void setup() {
Serial.begin(9600);
//setup Pinnen
pinMode(motor1.getSpeedPin(), OUTPUT);
pinMode(motor2.getSpeedPin(), OUTPUT);
pinMode(motor1.getDirectionPin(), OUTPUT);
pinMode(motor2.getDirectionPin(), OUTPUT);

pinMode(A0, INPUT);
pinMode(A1, INPUT);
}

void loop() {
sensorinput1=analogRead(A0);
sensorinput2=analogRead(A1);
//Hoekberekenen(sensorinput1,sensorinput2);
motor1.forward(motor1, motor2);
delay(1000);
//motor1.backward(motor1, motor2);
delay(1000);
}

#include "Arduino.h"
#include "motor.h"
#include "beweging.h"

void Beweging::voegToe(Motor motor1, Motor motor2) {
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor1.setDirection(1); //1=voorwaarts, 0= achterwaarts
  motor2.setDirection(1);
}

void Beweging::forward(Motor motor1, Motor motor2){
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor1.setDirection(1); //1=voorwaarts, 0= achterwaarts
  motor2.setDirection(1);
}
void Beweging::backward(Motor motor1, Motor motor2){
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor1.setDirection(0);//1=voorwaarts, 0= achterwaarts
  motor2.setDirection(0);
}
void Beweging::turnRight(Motor motor1, Motor motor2,int graden){
  int parameterhoek= 1;
  int parametertijd= 100;
  
  motor1.setSpeed(255- parameterhoek *graden);
  motor2.setSpeed(255);
  motor1.setDirection(1);//1=voorwaarts, 0= achterwaarts
  motor2.setDirection(1);
  
  delay(parametertijd);
  
  motor1.setSpeed(255);
  motor2.setSpeed(255);
}
void Beweging::turnLeft(Motor motor1, Motor motor2,int graden){
  int parameterhoek= 1;
  int parametertijd= 100;
  
  motor1.setSpeed(255);
  motor2.setSpeed(255-parameterhoek*graden);
  motor1.setDirection(1);//1=voorwaarts, 0= achterwaarts
  motor2.setDirection(1);
  
  delay(parametertijd);
  
  motor1.setSpeed(255);
  motor2.setSpeed(255);
}
void Beweging::stilstaan(Motor motor1, Motor motor2){
	motor1.setSpeed(0);
	motor2.setSpeed(0);
}

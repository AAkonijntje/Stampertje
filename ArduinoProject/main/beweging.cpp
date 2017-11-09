#include "Arduino.h"
#include "motor.h"

void beweging::forward(Motor motor1, Motor motor2){
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor1.setdirection(1); //1=voorwaarts, 0= achterwaarts
  motor2.setdirection(1);
}
void beweging::backward(Motor motor1, Motor motor2){
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor1.setdirection(0);//1=voorwaarts, 0= achterwaarts
  motor2.setdirection(0);
}
void beweging::turnRight(Motor motor1, Motor motor2,int graden){
  int parameterhoek= 1;
  int parametertijd= 100;
  
  motor1.setSpeed(255-parameter*graden);
  motor2.setSpeed(255);
  motor1.setdirection(1);//1=voorwaarts, 0= achterwaarts
  motor2.setdirection(1);
  
  delay(parametertijd);
  
  motor1.setSpeed(255);
  motor2.setSpeed(255);
}
void beweging::turnLeft(Motor motor1, Motor motor2,int graden){
  int parameterhoek= 1;
  int parametertijd= 100;
  
  motor1.setSpeed(255);
  motor2.setSpeed(255-parameter*graden);
  motor1.setdirection(1);//1=voorwaarts, 0= achterwaarts
  motor2.setdirection(1);
  
  delay(parametertijd);
  
  motor1.setSpeed(255);
  motor2.setSpeed(255);
}
void beweging::stilstaan(){
	motor1.setSpeed(0);
	motor2.setSpeed(0);
}
#include "Arduino.h"
#include "motor.h"
#include "beweging.h"

void Beweging::voegToe(Motor motor1, Motor motor2) {

  _pinSnelheidA = motor1.getPinSpeed();
  _pinSnelheidB = motor2.getPinSpeed();

  _pinDirectionA= motor1.getPinDirection();
  _pinDirectionB= motor2.getPinDirection();

  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor1.setDirection(1); //1=voorwaarts, 0= achterwaarts
  motor2.setDirection(1);
}
void setupPinnen(){
  pinMode( _pinDirectionA, OUTPUT);
  //pinMode(_pinDirectionA,OUTPUT);

  //pinMode(_pinSnelheidB, OUTPUT);
  //pinMode(_pinDirectionB,OUTPUT);

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
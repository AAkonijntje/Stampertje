#include "Arduino.h"
#include "motor.h"

void Motor::setSpeed(int snelheid){
  _speed=snelheid;
}
void Motor::setDirection(int direction){
  _direction=direction;
}
void Motor::setPinDirection(int pin){
  _pinDirection=pin;
}
void Motor::setPinSpeed(int pin){
  _pinSpeed=pin;
}
int Motor::getSpeed(Motor motor){
  return motor._speed;
}
int Motor::getDirection(Motor motor){
  return motor._direction;
}
int Motor::getPinDirection(){
  return _pinDirection;
}
int Motor::getPinSpeed(){
  return _pinSpeed;
}
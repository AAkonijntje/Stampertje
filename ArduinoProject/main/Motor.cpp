#include "Arduino.h"
#include "motor.h"

void Motor::setSpeed(int speed){
  _speed=speed;
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

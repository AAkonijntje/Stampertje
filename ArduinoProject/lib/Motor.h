#ifndef moter_h
#define moter_h

#include "arduino.h"
class Motor{
  public:
    setSpeed(int speed);
    setDirection(int direction);
    setPinSpeed(int pin);
    setPinDirection(int pin);
    
    getSpeed(int speed);
    getDirection(int direction);
    getPinSpeed(int pin);
    getPinDirection(int pin);
    
    Motor();
  private:
    int _pinSpeed;
    int _pinDirection;
    int _speed;
    int _direction;
};


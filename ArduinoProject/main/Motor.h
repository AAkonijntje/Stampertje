#ifndef moter_h
#define moter_h

#include "arduino.h"
class Motor{
  public:
    void setSpeed(int speed);
    void setDirection(int direction);
    void setPinSpeed(int pin);
    void setPinDirection(int pin);

    int getSpeed(Motor motor);
    int getDirection(Motor motor);
    int getPinSpeed();
    int getPinDirection();
    
    Motor();
  private:
    int _pinSpeed;
    int _pinDirection;
    int _speed;
    int _direction;
};

#endif

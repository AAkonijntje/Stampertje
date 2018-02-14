#ifndef moter_h
#define moter_h

#include "arduino.h"
class Motor{
  public:
         Motor();
    void setSpeed(int speed);
    void setDirection(int direction);

    int getSpeed(Motor motor);
    int getDirection(Motor motor);

  private:
    int _speed;
    int _direction;
};

#endif

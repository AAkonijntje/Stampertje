#ifndef moter_h
#define moter_h

#include "arduino.h"
class Motor{
  public:
         Motor();
         Motor(int speed,int constraint[2]);
    
  private:
    int _speed;
    int _constraint[2];
};

#endif

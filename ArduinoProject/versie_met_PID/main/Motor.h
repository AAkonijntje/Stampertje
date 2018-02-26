#ifndef motor_h
#define motor_h

#include "arduino.h"
class Motor{
  public:
         Motor();
         void rotate(int PIDvalue);
         void slowDown(int PIDvalue);
         void speedUp(int PIDvalue);
};
#endif

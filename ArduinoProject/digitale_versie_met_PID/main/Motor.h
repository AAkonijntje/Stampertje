#ifndef motor_h
#define motor_h

#include "arduino.h"
class Motor{
  public:
         Motor();
         Motor(int pref_speed);
         void rotate(int PIDvalue);
  private:
         void alterSpeed();
};
#endif

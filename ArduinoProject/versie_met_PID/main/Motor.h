#ifndef motor_h
#define motor_h

#include "arduino.h"
class Motor{
  public:
         Motor();
         Motor(int pref_speed);
         void rotate(int PIDvalue, int dir);
  private:
         void alterSpeed();
};
#endif

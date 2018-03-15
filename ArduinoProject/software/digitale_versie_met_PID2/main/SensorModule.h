#ifndef SensorModule_h
#define SensorModule_h

#include "arduino.h"
#include "PID.h"

class SensorModule{
  public:
	    SensorModule();
      SensorModule(int pin_W, int pin_Z);
      int calculatePID(PID pid);
      void printValues(PID pid);
  private:
      int _W_sens;
	    int _Z_sens;
};
#endif

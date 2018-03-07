#ifndef PID_h
#define PID_h

#include "arduino.h"

class PID{
	public:
		PID();
    PID(int Kp, int Ki, int Kd);

    int calculatePID(int val);

  private:
    //PID variabelen
    int _Kp;
    int _Ki;
    int _Kd;
    //PID regeling
    int _P,_I,_D;
    int _PIDvalue;
    int _previousError;
    
};

#endif


#ifndef PID_h
#define motor_h

#include "arduino.h"

class PID{
	public:
		PID();
    PID(int Kp, int Ki, int Kd);

    int calculatePID(int val);

  private:
    //PID variabelen
    int Kp;
    int Ki;
    int Kd;
    //PID regeling
    int P,I,D;
    int PIDvalue;
    int previousError;
    
};

#endif


#include "Arduino.h"
#include "PID.h"

//PID variabelen
int _Kp;
int _Ki;
int _Kd;
//PID regeling
int _P,_I,_D;
int _PIDvalue = 0;
int _previousError;

PID::PID(){
}

PID::PID(int Kp, int Ki, int Kd){
  _Kp = Kp;
  _Ki = Ki;
  _Kd = Kd;
}

int PID::calculatePID(int error){
  _P = error;
  _I += error;
  _D = error - _previousError;
  _PIDvalue = (_Kp*_P) + (_Ki*_I) + (_Kd*_D);
  _previousError = error;

  return int(_PIDvalue);
}




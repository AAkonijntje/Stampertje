#include "Arduino.h"
#include "PID.h"

//PID variabelen
double _Kp;
double _Ki;
double _Kd;
//PID regeling
double _P,_I,_D;
int _PIDvalue = 0;
int _previousError=0;

PID::PID(){
}

PID::PID(double Kp, double Ki, double Kd){
  _Kp = Kp;
  _Ki = Ki;
  _Kd = Kd;
}

double PID::calculatePID(double error){
  _P = error;
  _I += error;
  _D =  _previousError-error;
  _PIDvalue = (_Kp*_P) + (_Ki*_I) + (_Kd*_D);
  _previousError = error;
  Serial.print(" PID: ");
  Serial.print(_PIDvalue);
  Serial.print("  _P: ");
  Serial.print(_P);
  Serial.print("  _D: ");
  Serial.print(_D);
  Serial.print('\n');

  return _PIDvalue;
}




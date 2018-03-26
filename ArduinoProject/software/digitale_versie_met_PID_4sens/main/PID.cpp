#include "Arduino.h"
#include "PID.h"

//PID variabelen
double _Kp;
double _Ki;
double _Kd;
//PID regeling
double _P,_I,_D;
double _PIDvalue = 0;
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
  _D =  error-_previousError;
  _PIDvalue = (_Kp*_P) + (_Ki*_I) + (_Kd*_D);
  _previousError = error;
  /*Serial.print(" _kp ");
  Serial.print(_Kp);
  Serial.print(" p ");
  Serial.print(_P);
    Serial.print(" _kd ");
  Serial.print(_Kd);
  Serial.print(" D ");
  Serial.print(_D);
  
  Serial.print(" error ");
  Serial.print(error);
  Serial.print(" PID ");
  Serial.println(_PIDvalue);*/
  return _PIDvalue;
}




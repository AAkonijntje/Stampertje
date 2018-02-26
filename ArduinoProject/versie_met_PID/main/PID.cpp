#include "Arduino.h"
#include "PID.h"

//PID variabelen
int Kp;
int Ki;
int Kd;
//PID regeling
int P,I,D;
int PIDvalue;
int previousError;

PID::PID(){
}

PID::PID(int Kp, int Ki, int Kd){
  Kp = Kp;
  Ki = Ki;
  Kd = Kd;
}

int PID::calculatePID(int error){
  P = error;
  I = I + error;
  D = error-previousError;
  PIDvalue = (Kp*P) + (Ki*I) + (Kd*D);
  previousError = error;
}




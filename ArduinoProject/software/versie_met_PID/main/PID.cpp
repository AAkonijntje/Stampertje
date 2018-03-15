#include "Arduino.h"
#include "PID.h"

//PID variabelen
int _Kp;
int _Ki;
int _Kd;
//PID regeling
int P,I,D;
int PIDvalue = 0;
int previousError;

PID::PID(){
}

PID::PID(int Kp, int Ki, int Kd){
  _Kp = Kp;
  _Ki = Ki;
  _Kd = Kd;
}

int PID::calculatePID(int error){
  P = error;
  I = I + error;
  D = error-previousError;
  PIDvalue = (_Kp*P) + (_Ki*I) + (_Kd*D);
  previousError = error;


Serial.println("******************************************");
      Serial.print("error: ");
    Serial.println(error);
Serial.println("******************************************");
Serial.println("#########################################");
      Serial.print("PIDvalue: ");
    Serial.println(PIDvalue);
Serial.println("############################################");

  return PIDvalue;
  
}




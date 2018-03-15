#include "Arduino.h"
#include "SensorModule.h"
#include "PID.h"

int _pin_0, _pin_1,_pin_2, _pin_3;
boolean uitBaan = false;
const int errorMap[11] = {-1,1,2,3,4,5,6,7,8,9,10};

SensorModule::SensorModule(){
}

SensorModule::SensorModule(int pin_0, int pin_1,int pin_2, int pin_3){
   _pin_0 = pin_0;
   _pin_1 = pin_1;
   _pin_2 = pin_2;
   _pin_3 = pin_3;
   pinMode(pin_0, INPUT);
   pinMode(pin_1, INPUT);
   pinMode(pin_2, INPUT);
   pinMode(pin_3, INPUT);
}

int SensorModule::calculatePID(PID pid){
  int sens1 = int(analogRead(_pin_0));
  int sens2 = int(analogRead(_pin_1));
  int sens3 = int(analogRead(_pin_2));
  int sens4 = int(analogRead(_pin_3));

  int temp=0;

  if ((sens1>500)&&(sens2>500)&&(sens3>500)&&(sens4>500)){
    return errorMap[1];
  } else if (sens4<500){
      if(sens3>500){
        temp= errorMap[11];
      } else if (sens2>500){
        temp= errorMap[10];
      } else if (sens1>500){
        temp= errorMap[9];
      } else if (sens1<500) {
        temp= errorMap[8];
      }
  } else if (sens3 <500){
    if (sens2>500){
        temp= errorMap[7];
      } else if (sens1>500){
        temp= errorMap[6];
      } else if (sens1<500) {
        temp= errorMap[5];
      }
  } else if (sens2 <500){
    if (sens1>500){
        temp= errorMap[4];
      } else if (sens1<500){
        temp= errorMap[3];
      }
  } else if (sens1 <500){
    temp= errorMap[2];
  } 

 return pid.calculatePID(2);
}

void SensorModule::printValues(PID pid){
/*  Serial.print(int(analogRead(_pin_W)/320));
  Serial.print('\n');
  Serial.print(int(analogRead(_pin_Z)/320));
  Serial.print('\n');
  String error = "error: ";
  Serial.print(error);
  Serial.print(int(errorMap[int(analogRead(_pin_W)/320)][int(analogRead(_pin_Z)/320)]));
  Serial.print('\n');
  String pidstr = "PID: ";
  Serial.print(pidstr);
  Serial.print(calculatePID(pid));
  Serial.print('\n');*/
}

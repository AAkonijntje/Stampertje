#include "Arduino.h"
#include "SensorModule.h"
#include "PID.h"

int _pin_W, _pin_Z;
boolean uitBaan = false;
const int errorMap[3][3] = {{2,1,0},
                           {3,0,-1},
                           {4,4,-3}}; //zie uitleg doorgestuurd blad op messenger :)

SensorModule::SensorModule(){
}

SensorModule::SensorModule(int pin_W, int pin_Z){
   _pin_W = pin_W;
   _pin_Z = pin_Z;
   pinMode(pin_W, INPUT);//wit sensor: links
   pinMode(pin_Z, INPUT);//zwart senor: rechts
}

int SensorModule::calculatePID(PID pid){
    int sens1 = int(analogRead(_pin_W)/320);
    int sens2 = int(analogRead(_pin_Z)/320);
    if(sens1 < sens2){
      //Uit de baan
      uitBaan = true;
    }else if(sens2==2 and sens1==2 or sens2==2 and sens1==1){
      uitBaan = false;
    }

    if(uitBaan){
      return pid.calculatePID(5);
    }else{
      return pid.calculatePID(errorMap[sens1][sens2]);
    }
}

void SensorModule::printValues(PID pid){
  Serial.print(int(analogRead(_pin_W)/320));
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
  Serial.print('\n');
}

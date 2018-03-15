#include "Arduino.h"
#include "SensorModule.h"
#include "PID.h"

int _pin_0, _pin_1,_pin_2, _pin_3;
boolean uitBaan = false;
const int errorMap[4][2] = {{2,1},
                           {3,0},
                           {4,4},
                           {3,0}}; //zie uitleg doorgestuurd blad op messenger :)

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
    //Wit is 0
    //Zwart is 2
    int sensW = int(analogRead(_pin_W)/500);
    int sensZ = int(analogRead(_pin_Z)/500);
    if(sensW > sensZ){
      //Uit de baan
      uitBaan = true;
    }else if(sensW < sensZ or sensW==0){
      uitBaan = false;
    }

    if(uitBaan){
      return pid.calculatePID(4);
    }else{
      return pid.calculatePID(errorMap[sensW][sensZ]);
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

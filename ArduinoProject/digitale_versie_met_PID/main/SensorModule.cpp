#include "Arduino.h"
#include "SensorModule.h"
#include "PID.h"

int _pin_W, _pin_Z;
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
    pid.calculatePID(errorMap[int(_pin_W/341)][int(_pin_Z/341)]);
}

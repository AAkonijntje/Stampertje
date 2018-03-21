#include "Arduino.h"
#include "SensorModule.h"
#include "PID.h"

int _pin_0, _pin_1,_pin_2, _pin_3;
int grens=350;
int sens1,sens2, sens3,sens4;
boolean uitBaan = false;
const int errorMap[11] = {-3,3,6,7,14,15,16,50,51,52,53};

int interval=250;

unsigned long currentmillis;
unsigned long previousmillis=0;


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

int SensorModule::calculatePIDSituatie(PID pid){
  int sens1 = int(analogRead(_pin_0));
  int sens2 = int(analogRead(_pin_1));
  int sens3 = int(analogRead(_pin_2));
  int sens4 = int(analogRead(_pin_3));

  int temp=0;

  if ((sens1>grens)&&(sens2>grens)&&(sens3>grens)&&(sens4>grens)){
    temp= errorMap[0];
  } else if (sens4<grens){
      if(sens3>grens){
        temp= errorMap[10];
      } else if (sens2>grens){
        temp= errorMap[9];
      } else if (sens1>grens){
        temp= errorMap[8];
      } else if (sens1<grens) {
        temp= errorMap[7];
      }
  } else if (sens3 <grens){
    if (sens2>grens){
        temp= errorMap[6];
      } else if (sens1>grens){
        temp= errorMap[5];
      } else if (sens1<grens) {
        temp= errorMap[4];
      }
  } else if (sens2 <grens){
    if (sens1>grens){
        temp= errorMap[3];
      } else if (sens1<grens){
        temp= errorMap[2];
      }
  } else if (sens1 <grens){
    temp= errorMap[1];
  } 
 return pid.calculatePID(temp);
}

void SensorModule::printValues(PID pid){
  currentmillis=millis();
  if (currentmillis-previousmillis >= interval){
    previousmillis =currentmillis;
    
    String pidstr = "PID: ";
    Serial.print(pidstr);
    Serial.print(calculatePIDSituatie(pid));
    Serial.print('\n');
  }
}

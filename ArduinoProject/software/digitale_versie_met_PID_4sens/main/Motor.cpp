#include "Arduino.h"
#include "motor.h"

const int dir_pin_motorL = 12;
const int dir_pin_motorR = 13; 
const int speed_pin_motorL = 3; 
const int speed_pin_motorR = 11;

int _pref_speed;
int _speed_left_motor;
int _speed_right_motor;
int previousPID=0;
int Interval=250;
int previousSens4;

unsigned long currentMillis;
unsigned long previousMillis=0;





Motor::Motor(){
  //setup Pinnen
  pinMode(dir_pin_motorL, OUTPUT);
  pinMode(dir_pin_motorR, OUTPUT);
  pinMode(speed_pin_motorL, OUTPUT);
  pinMode(speed_pin_motorR, OUTPUT);  
}

void Motor::start(int pref_speed){
  _pref_speed = pref_speed;
  digitalWrite(dir_pin_motorL, HIGH);
  digitalWrite(dir_pin_motorR, LOW);
  
  //eerste snelheid meegeven
  _speed_left_motor = _pref_speed;
  _speed_right_motor = _pref_speed;
}

void Motor::rotate(int PIDvalue){
    _speed_left_motor += (int)(PIDvalue);
    _speed_right_motor -= (int)(PIDvalue);


  alterSpeed(PIDvalue);
};

void Motor::printValues(){
  currentMillis=millis();
  if (currentMillis-previousMillis >= Interval){
    previousMillis =currentMillis;
     
    String l = "linkse motor: ";
    String r = "rechtse motor: ";
    Serial.print(l);
    Serial.print(_speed_left_motor);
    Serial.print("   ");
    Serial.print(r);
    Serial.print(_speed_right_motor);
    Serial.print("   Sens4: ");
    Serial.print(previousSens4);
    Serial.print('\n');
  }
}

void Motor::alterSpeed(int PIDvalue){
  //###################### bescherming overshoot PID ###################
  if (_speed_left_motor>1.25*_pref_speed){
    _speed_left_motor=1.25*_pref_speed;
  }
  if (_speed_left_motor<.75*_pref_speed){
    _speed_left_motor=.75*_pref_speed;
  }
  if (_speed_right_motor>1.25*_pref_speed){
    _speed_right_motor=1.25*_pref_speed;
  }
  if (_speed_right_motor<.75*_pref_speed){
    _speed_right_motor=.75*_pref_speed;
  }
  //###################### Reset bij kleurverandering ##################
  if((((previousPID<0)&&(PIDvalue>0))||((previousPID>0)&&(PIDvalue<0)))||(previousSens4<350)){
    _speed_right_motor=_pref_speed;
    _speed_left_motor=_pref_speed;
  }
  previousPID=PIDvalue;
  previousSens4=analogRead(A3);
  //delay(500);

  printValues();

  analogWrite(speed_pin_motorL, _speed_left_motor);
  analogWrite(speed_pin_motorR, _speed_right_motor);
}


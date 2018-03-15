#include "Arduino.h"
#include "motor.h"

const int dir_pin_motorL = 12;
const int dir_pin_motorR = 13; 
const int speed_pin_motorL = 3; 
const int speed_pin_motorR = 11;

int pref_speed;
int speed_left_motor;
int speed_right_motor;

Motor::Motor(){}

Motor::Motor(int speed){
  pref_speed = speed;
  //setup Pinnen
  pinMode(dir_pin_motorL, OUTPUT);
  pinMode(dir_pin_motorR, OUTPUT);
  pinMode(speed_pin_motorL, OUTPUT);
  pinMode(speed_pin_motorR, OUTPUT);

  digitalWrite(dir_pin_motorL, HIGH);
  digitalWrite(dir_pin_motorR, LOW);
  
  //eerste snelheid meegeven
  speed_left_motor = pref_speed;
  speed_right_motor = pref_speed;
}

void Motor::rotate(int PIDvalue){
  //dir = 1 -> draai naar rechts => rechterwiel++ & linkerwiel--
  //dir = -1 -> draai naar links => linkerwiel++ & rechterwiel-- 
  if (abs(PIDvalue)<30){
    speed_left_motor += (int)(PIDvalue/2);
    speed_right_motor -= (int)(PIDvalue/2);
  } 
    
  alterSpeed();
};

void Motor::alterSpeed(){
  int change = pref_speed - max(speed_left_motor, speed_right_motor);
  speed_left_motor += change;
  speed_right_motor += change;

  if (speed_left_motor < pref_speed-30){
    speed_left_motor = pref_speed-30;
  } else if (speed_right_motor < pref_speed-30) {
    speed_right_motor = pref_speed-30;
  }

  //analogWrite(speed_pin_motorL, speed_left_motor);
  //analogWrite(speed_pin_motorR, speed_right_motor);
  
  Serial.println("/////////////////////////////////////////");
  Serial.print("speed_left_motor: ");
  Serial.println(speed_left_motor);
  Serial.print("speed_right_motor: ");
  Serial.println(speed_right_motor);
  Serial.println("/////////////////////////////////////////");

  analogWrite(speed_pin_motorL, 0);
  analogWrite(speed_pin_motorR, 0);
}


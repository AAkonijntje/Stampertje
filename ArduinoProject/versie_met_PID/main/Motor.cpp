#include "Arduino.h"
#include "motor.h"

const int dir_pin_motor1 = 3; // linkermotor
const int dir_pin_motor2 = 11; // rechtermotor
const int speed_pin_motor1 = 12;
const int speed_pin_motor2 = 13; 

int pref_speed;
int speed_left_motor;
int speed_right_motor;

Motor::Motor(){}

Motor::Motor(int pref_speed){
  pref_speed = pref_speed;
  //setup Pinnen
  pinMode(dir_pin_motor1, OUTPUT);
  pinMode(dir_pin_motor1, OUTPUT);
  pinMode(speed_pin_motor1, OUTPUT);
  pinMode(speed_pin_motor2, OUTPUT);

  digitalWrite(dir_pin_motor1, HIGH);
  digitalWrite(dir_pin_motor2, LOW);
}

void Motor::rotate(int PIDvalue, int dir){
  speed_left_motor += dir * int(PIDvalue/2);
  speed_right_motor += dir * int(PIDvalue/2);
  alterSpeed();
};

void Motor::alterSpeed(){
  int change = pref_speed - max(speed_left_motor, speed_right_motor);
  speed_left_motor += speed_left_motor;
  speed_right_motor += speed_right_motor;
  
  analogWrite(speed_pin_motor1, speed_left_motor);
  analogWrite(speed_pin_motor2, speed_right_motor);
}


#include "Arduino.h"
#include "motor.h"

const int dir_pin_motor1 = 3;
const int dir_pin_motor2 = 11;
const int speed_pin_motor1 = 12;
const int speed_pin_motor2 = 13;  

Motor::Motor(){
  //setup Pinnen
  pinMode(dir_pin_motor1, OUTPUT);
  pinMode(dir_pin_motor1, OUTPUT);
  pinMode(speed_pin_motor1, OUTPUT);
  pinMode(speed_pin_motor2, OUTPUT);

  digitalWrite(dir_pin_motor1, HIGH);
  digitalWrite(dir_pin_motor2, LOW);
}

void Motor::rotate(int PIDvalue){
   analogWrite(speed_pin_motor1,PIDvalue);
   analogWrite(speed_pin_motor2,PIDvalue);
};

void Motor::slowDown(int PIDvalue){

}

void Motor::speedUp(int PIDvalue){

}


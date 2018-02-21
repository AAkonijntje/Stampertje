#include "Arduino.h"
#include "motor.h"

// ############################### constructoren #####################
Motor::Motor(){  
}
Motor::Motor(int direction, int speed,int speedpin, int directionpin){  
  _speed= speed;
  _direction=direction;
  _speedPin= speedpin;
  _directionPin=directionpin;  
}

// ############################### aanpassen attributen #####################
void Motor::setSpeed(int snelheid){
  _speed=snelheid;
}
void Motor::setDirection(int direction){
  _direction=direction;
}
int Motor::getSpeed(Motor motor){
  return motor._speed;
}
int Motor::getDirection(Motor motor){
  return motor._direction;
}
int Motor::getSpeedPin(){
  return _speedPin;
}
int Motor::getDirectionPin(){
  return _directionPin;
}
// ############################### Bewegingen #####################
//max: 255 min: 40
void Motor::forward(Motor motorA, Motor motorB){
  digitalWrite(motorA.getDirectionPin(), HIGH  );
  digitalWrite(motorB.getDirectionPin(), LOW);
  analogWrite(motorA.getSpeedPin(),255);
  analogWrite(motorB.getSpeedPin(),255);
}
void Motor::backward(Motor motorA, Motor motorB){
  digitalWrite(motorA.getDirectionPin(), LOW  );
  digitalWrite(motorB.getDirectionPin(), HIGH);
  analogWrite(motorA.getSpeedPin(),255);
  analogWrite(motorB.getSpeedPin(),255);
}
void Motor::Stilstand(Motor motorA, Motor motorB){
  digitalWrite(motorA.getDirectionPin(), LOW  );
  digitalWrite(motorB.getDirectionPin(), HIGH);
  analogWrite(motorA.getSpeedPin(),0);
  analogWrite(motorB.getSpeedPin(),0);
}
void Motor::Bijsturen(Motor motorA, Motor motorB, int hoek){
  if (hoek<0){// Rechts draaiien
      int a= (hoek /90) *255;  
      digitalWrite(motorA.getDirectionPin(), HIGH  );
      digitalWrite(motorB.getDirectionPin(), LOW);
      analogWrite(motorA.getSpeedPin(),255);
      analogWrite(motorB.getSpeedPin(),a);
  }else if (hoek>0){// links draaiien
      int a= (hoek /90) *255;  
      digitalWrite(motorA.getDirectionPin(), HIGH  );
      digitalWrite(motorB.getDirectionPin(), LOW);;
      analogWrite(motorA.getSpeedPin(),a);
      analogWrite(motorB.getSpeedPin(),255);
  }
}
//############################### Berekening Hoek #####################
void Motor::Hoekberekenen(int si1, int si2){
  
}


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
//max: 255 min: 40 A rechts, B links
void Motor::forward(Motor motorA, Motor motorB){
  digitalWrite(motorA.getDirectionPin(), HIGH  );
  digitalWrite(motorB.getDirectionPin(), LOW);
  analogWrite(motorA.getSpeedPin(),50);
  analogWrite(motorB.getSpeedPin(),50);
}
void Motor::backward(Motor motorA, Motor motorB){
  digitalWrite(motorA.getDirectionPin(), LOW  );
  digitalWrite(motorB.getDirectionPin(), HIGH);
  analogWrite(motorA.getSpeedPin(),50);
  analogWrite(motorB.getSpeedPin(),50);
}
void Motor::Stilstand(Motor motorA, Motor motorB){
  digitalWrite(motorA.getDirectionPin(), LOW  );
  digitalWrite(motorB.getDirectionPin(), HIGH);
  analogWrite(motorA.getSpeedPin(),0);
  analogWrite(motorB.getSpeedPin(),0);
}
void Motor::Bijsturen(Motor motorA, Motor motorB, int hoek){
  if (hoek>0){// Rechts draaiien
      int a= 50-hoek;  
      digitalWrite(motorA.getDirectionPin(), HIGH  );
      digitalWrite(motorB.getDirectionPin(), LOW);
      analogWrite(motorA.getSpeedPin(),50);
      analogWrite(motorB.getSpeedPin(),a);
  }else if (hoek<0){// links draaiien
      int a= 50-hoek;  
      digitalWrite(motorA.getDirectionPin(), HIGH  );
      digitalWrite(motorB.getDirectionPin(), LOW);;
      analogWrite(motorA.getSpeedPin(),a);
      analogWrite(motorB.getSpeedPin(),50);
  }
}
//############################### Berekening Hoek #####################
int Motor::Hoekberekenen(int si1, int si2){
//si1 is sensor op de rand (600-250),si2 is sensor op het zwart 600+, wit is 250-
  
//sensor wijkt meer en meer af naar links  
  if ((si1>250)&&(si1<600)&&(si2>600)){
    return 0;
    Serial.print("geval:1");
    Serial.print(" \n");
  }
  if ((si1<250)&&(si2>600)){
    return 10;
    Serial.print("geval: 2");
    Serial.print(" \n");
  }
  if ((si1<250)&&(si2>250)&&(si2<600)){
    return 15;
    Serial.print("geval:  3");
    Serial.print(" \n");
  }
  if ((si2<250)){
    return 20;
  }  
//sensor wijkt meer en meer af naar rechts
  if ((si1>600)&&(si2>600)){
    return -15;
    Serial.print("geval:   4");
    Serial.print(" \n");
  }
}


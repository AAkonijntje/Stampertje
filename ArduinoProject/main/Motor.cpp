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
   int snelheid = 70;
  digitalWrite(motorA.getDirectionPin(), HIGH  );
  digitalWrite(motorB.getDirectionPin(), LOW);
  analogWrite(motorA.getSpeedPin(),snelheid);
  analogWrite(motorB.getSpeedPin(),snelheid);
}
void Motor::backward(Motor motorA, Motor motorB){
   int snelheid =70;
  digitalWrite(motorA.getDirectionPin(), LOW  );
  digitalWrite(motorB.getDirectionPin(), HIGH);
  analogWrite(motorA.getSpeedPin(),snelheid);
  analogWrite(motorB.getSpeedPin(),snelheid);
}
void Motor::Stilstand(Motor motorA, Motor motorB){
  digitalWrite(motorA.getDirectionPin(), LOW  );
  digitalWrite(motorB.getDirectionPin(), HIGH);
  analogWrite(motorA.getSpeedPin(),0);
  analogWrite(motorB.getSpeedPin(),0);
}
void Motor::Bijsturen(Motor motorA, Motor motorB, int hoek){
  int snelheid = 70;
  if (hoek>0){// Rechts draaiien
      int a= snelheid-hoek;  
      digitalWrite(motorA.getDirectionPin(), HIGH  );
      digitalWrite(motorB.getDirectionPin(), LOW);
      analogWrite(motorA.getSpeedPin(),snelheid);
      analogWrite(motorB.getSpeedPin(),a);
  }else if (hoek<0){// links draaiien
      int a=snelheid+hoek;  
      digitalWrite(motorA.getDirectionPin(), HIGH  );
      digitalWrite(motorB.getDirectionPin(), LOW);;
      analogWrite(motorA.getSpeedPin(),a);//linkermotor
      analogWrite(motorB.getSpeedPin(),snelheid);
  }
  if (hoek=25){
    delay(30);//delay bij overshoot
  }
}
//############################### Berekening Hoek #####################
int Motor::Hoekberekenen(int si1, int si2){
//si1 is sensor op de rand (600-250),si2 is sensor op het zwart 600+, wit is 250-
  int wit=500;
  int zwart=800;
//sensor wijkt meer en meer af naar links  
  if ((si2<wit)||(si1<wit)){
    return 25;//verander ook delay bij overshoot
  } 
  if ((si1<wit)&&(si2>wit)&&(si2<zwart)){
    return 10;
    Serial.println("geval:  3");
  }
  if ((si1<wit)&&(si2>zwart)){
    return 5;
    Serial.println("geval: 2");
  }
  if ((si1>wit)&&(si1<zwart)&&(si2>zwart)){
    return 0;
    Serial.println("geval:1");
 }

  
//sensor wijkt meer en meer af naar rechts
  if ((si1>zwart)&&(si2>zwart)){
    return -10;
    Serial.println("geval:   4");
  }
}


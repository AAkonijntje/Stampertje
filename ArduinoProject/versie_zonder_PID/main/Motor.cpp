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
   int snelheid = 255;
  digitalWrite(motorA.getDirectionPin(), HIGH  );
  digitalWrite(motorB.getDirectionPin(), LOW);
  analogWrite(motorA.getSpeedPin(),snelheid);
  analogWrite(motorB.getSpeedPin(),snelheid);
}
void Motor::backward(Motor motorA, Motor motorB){
   int snelheid =255;
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
  int snelheid =60;
      int a= snelheid+hoek/2;  
      int b= snelheid-hoek/2;  
      digitalWrite(motorA.getDirectionPin(), HIGH  );
      digitalWrite(motorB.getDirectionPin(), LOW);
      analogWrite(motorA.getSpeedPin(),a);// linkermotor
      analogWrite(motorB.getSpeedPin(),b);// rechtermotor

  if ((hoek=25)||(hoek=50)){
    delay(15);//delay bij overshoot
  }
}
//############################### Berekening Hoek #####################
int Motor::Hoekberekenen(int si1, int si2){
//si1 is sensor op de rand (800-500),si2 is sensor op het zwart 600+, wit is 500-
  int wit=300;
  int zwart=800;
//sensor wijkt meer en meer af naar links  
  if ((si1>zwart)&&(si2>zwart)){//sensor zit volledig in het zwart
    Serial.println("  geval:twee keer ZWART");
    return -20;
  }
  if ((si1>wit)&&(si1<zwart)&&(si2>zwart)){//eerste sensor zit in buffer, tweede in zwart
    Serial.println("  geval:gewenste situatie"); 
    return 0;
 }
   if ((si1>wit)&&(si1<zwart)&&(si2>wit)&&(si2<zwart)){//eerste sensor zit in buffer, tweede in buffer
    Serial.println("  geval:beide in BUFFER"); 
    return 5;
 }
  if ((si1<wit)&&(si2>zwart)){//eerste sensor in wit, tweede in zwart
    Serial.println("  geval:eerste in wit tweede in ZWART");
    return 5;
  }
  if ((si1<wit)&&(si2>wit)){//eerste sensor zit in wit
    Serial.println("  geval:eerste in WIT");
    return 10;
  }
  if ((si2<wit)&&(si1<wit)){ // beide sensoren zitten op het wit
    Serial.println("  geval:beide in WIT");
    return 25;//verander ook delay bij overshoot
  } 
  if (si2<wit){ // tweede sensor zit op het wit
    Serial.println("  geval:tweede in WIT");
    return 50;//verander ook delay bij overshoot
  } 

else {
Serial.println("  geval:ongedefinieerd geval ---------------------------");
  return 0;
 }
}


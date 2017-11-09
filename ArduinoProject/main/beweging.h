#ifndef beweging_h
#define beweging_h

#include "arduino.h"
#include "motor.h"
class beweging{
  public:
    forward(Motor motor1, Motor motor2, );
    backward(Motor motor1, Motor motor2);
    turnLeft(Motor motor1, Motor motor2,int graden);
    turnRight(Motor motor1, Motor motor2,int graden);
    stilstaan();
    
};


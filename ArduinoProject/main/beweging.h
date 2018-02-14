#ifndef Beweging_h
#define Beweging_h

#include "arduino.h"
#include "motor.h"
class Beweging{
  public:
    void voegToe(Motor motor1, Motor motor2);
    void forward(Motor motor1, Motor motor2);
    void backward(Motor motor1, Motor motor2);
    void turnLeft(Motor motor1, Motor motor2, int graden);
    void turnRight(Motor motor1, Motor motor2, int graden);
    void stilstaan(Motor motor1, Motor motor2);


private:

};

#endif

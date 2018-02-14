#ifndef Beweging_h
#define Beweging_h

#include "arduino.h"
#include "motor.h"
class Beweging{
  public:
    void voegToe(Motor motor1, Motor motor2);
    void setupPinnen();
    void forward(Motor motor1, Motor motor2);
    void backward(Motor motor1, Motor motor2);
    void turnLeft(Motor motor1, Motor motor2, int graden);
    void turnRight(Motor motor1, Motor motor2, int graden);
    void stilstaan(Motor motor1, Motor motor2);


private:

    int _pinSnelheidA=0;
    int _pinDirectionA=0;
    int _pinSnelheidB=0;
    int _pinDirectionB=0;

    Motor motorA;
    Motor motorB;
};

#endif

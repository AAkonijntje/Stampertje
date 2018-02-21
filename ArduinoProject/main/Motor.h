#ifndef moter_h
#define moter_h

#include "arduino.h"
class Motor{
  public:
         Motor();
         Motor(int direction, int speed,int speedpin, int directionpin);
         
    // aanpassen van de eigenschappen van 1 motor    
    void setSpeed(int speed);
    void setDirection(int direction);
    int getSpeed(Motor motor);
    int getDirection(Motor motor);
    int getSpeedPin();
    int getDirectionPin();
    
    // coordineren van twee motoren

    void forward(Motor motorA, Motor motorB);
    void backward(Motor motorA, Motor motorB);
    void Bijsturen(Motor motorA, Motor motorB, int hoek);
    void Stilstand(Motor motorA, Motor motorB);
    void Hoekberekenen(int si1, int si2);
    
  private:
    int _speed;
    int _direction;
    int _speedPin;
    int _directionPin;
};

#endif

#include "Arduino.h"
#include "motor.h"

// ############################### constructoren #####################
Motor::Motor(){  
}
Motor::Motor(int speed,int constraint[2]){  
  _speed= speed;
  _constraint[2]=constraint[2];
}


#include <Servo.h>
#include "motor.h"
//#include <TimerOne.h>

//outputs
const int dir_pin_motor1 = 3;
const int dir_pin_motor2 = 11;
const int speed_pin_motor1 = 12;
const int speed_pin_motor2 = 13;
const int constraint[2] = {45,70};

const int deel = 20;

//toevoegen van sensorinput
int W_sens=0;
int Z_sens=0;
//toevoegen van timer
//Timer timer;

//PID regeling
int ref_value;
int P,I,D,PIDvalue,previousError;
//PID waarden
int Kp = 10;
int Ki = 5;
int Kd = 1;

void setup() {
  Serial.begin(9600);
  //setup Pinnen
  pinMode(dir_pin_motor1, OUTPUT);
  pinMode(dir_pin_motor1, OUTPUT);
  pinMode(speed_pin_motor1, OUTPUT);
  pinMode(speed_pin_motor2, OUTPUT);
  
  pinMode(A0, INPUT);//wit sensor: links
  pinMode(A1, INPUT);//zwart senor: rechts

  ref_value = int(analogRead(A1)/deel) - int(analogRead(A0)/deel);
  //digitalWrite(dir_pin_motor1, HIGH);
  //digitalWrite(dir_pin_motor2, LOW);
}

void loop() {  
  W_sens=int(analogRead(A0)/deel);//Wit
  Z_sens=int(analogRead(A1)/deel);//Zwart
  Serial.print(W_sens);
  Serial.print("  ");
  Serial.print(Z_sens);
  Serial.print(" \n");
  
  Serial.print("PIDvalue: ");
  Serial.print(PIDvalue);
  Serial.print("\n");

  int error = W_sens-(Z_sens-ref_value);
  Serial.print(error);
  Serial.print("\n");
  calculatePID(error);
  

  /*/bijsturen
   analogWrite(speed_pin_motor1,calculateSpeed(PIDvalue));
   analogWrite(speed_pin_motor2,calculateSpeed(PIDvalue));
*/
  delay(1000);
}

void calculatePID(int val)
{
  int error;
  if(error > 0){
     error = val; 
  }else {
    error = 5*val;
  }
  P = error;
  I = I + error;
  D = error-previousError;
  PIDvalue = (Kp*P) + (Ki*I) + (Kd*D);
  previousError = error;
}

int calculateSpeed(int PIDvalue)
{
 
}


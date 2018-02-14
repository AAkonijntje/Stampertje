#include "motor.h"
#include "beweging.h"

int pinSpeedA= 3;
int pinSpeedB= 11;
int pinDirectionA= 12;
int pinDirectionB= 13;

//voegToe(motor1,motor2);
Motor motor1=Motor();
Motor motor2=Motor();
//beweging.voegToe(motor1, motor2);

void setup() {
//setup Pinnen
pinMode(pinSpeedA, OUTPUT);
pinMode(pinSpeedB, OUTPUT);
pinMode(pinDirectionA, OUTPUT);
pinMode(pinDirectionB, OUTPUT);
}

void loop() {


}

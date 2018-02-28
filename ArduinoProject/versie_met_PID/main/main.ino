#include <Servo.h>
#include "motor.h"
#include "PID.h"
//#include <TimerOne.h>

//toevoegen van sensorinput
int W_sens=0;
int Z_sens=0;

//Motor waarden
Motor motor;

//PID waarden
const int div_val = 50;
int Z_ref, W_ref;
PID steeringPID;

//search start position: blinkey LED
boolean searchStartPos;
const long interval = 1000;
unsigned long previousMillis = 0;
int counter = 5;
int ledState = LOW; 
int ledpin = 5;


void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);//wit sensor: links
  pinMode(A1, INPUT);//zwart senor: rechts

  pinMode(ledpin, OUTPUT);//blinky LED

  //setup sturingPID
  searchStartPos = true;
  steeringPID = PID(2, 1, 1);
  
}

void loop() {  
  if (searchStartPos){
    W_ref = int(analogRead(A0)/div_val);
    Z_ref = int(analogRead(A1)/div_val);


  Serial.print("witte sensor: ");
  Serial.println(W_ref);

  Serial.print("zwarte sensor: ");
  Serial.println(Z_ref);
    
    if (W_ref < 2*Z_ref){
      blinkLed();
    } else {
      counter = 5;  
      digitalWrite(ledpin, LOW);
    }
  } else {
    W_sens=int(analogRead(A0)/div_val);//Wit
    Z_sens=int(analogRead(A1)/div_val);//Zwart

    //Als Z_ref-Z_sens groter is dan nul, moet men naar rechts draaien: dir = +1 en anders naar links: dir = -1
    motor.rotate(steeringPID.calculatePID(max(abs(W_ref - W_sens), abs(Z_ref - Z_sens))), (Z_ref-Z_sens)/abs(Z_ref-Z_sens));
  } 
  delay(300);
}

void blinkLed() {
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= interval) {
      counter--;

Serial.println(counter);
      
      previousMillis = currentMillis;
  
      if (ledState == LOW) {
        ledState = HIGH;
      } else {
        ledState = LOW;
      }
      digitalWrite(ledpin, ledState);
    }

    if (counter == 0) {
      searchStartPos = false;
      //setup motor
      motor = Motor(80);
    }
}



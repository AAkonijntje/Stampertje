#include "motor.h"
#include "PID.h"
#include "LED.h"
#include "SensorModule.h"

Motor motor;
LED led;
PID steeringPID;
SensorModule leftsens;

boolean searchStartPos;


void setup() {
  Serial.begin(9600);

  motor = Motor();
  led = LED(3);
  steeringPID = PID(6, 0, 0);
  leftsens = SensorModule(A0, A1);
  searchStartPos = true;

  //initialize and stop interrupts
  initInterrupts();
}

void loop() {  
  if (searchStartPos){
    int W_ref = int(analogRead(A0)/341);
    int Z_ref = int(analogRead(A1)/341);
    
    if (W_ref == 0 and Z_ref == 2){
      searchStartPos = led.blinkLed(searchStartPos);
    } else {
      led.reinitialize();
    }
  } else {
    motor.start(70);
    sei();//allow interrupts
  }
  
}

void initInterrupts(){
  cli();//stop interrupts
  
  //set timer2 interrupt at 8kHz
  TCCR2A = 0;// set entire TCCR2A register to 0
  TCCR2B = 0;// same for TCCR2B
  TCNT2  = 0;//initialize counter value to 0
  // set compare match register for 8khz increments
  OCR2A = 249;// = (16*10^6) / (8000*8) - 1 (must be <256)
  // turn on CTC mode
  TCCR2A |= (1 << WGM21);
  // Set CS21 bit for 8 prescaler
  TCCR2B |= (1 << CS21);   
  // enable timer compare interrupt
  TIMSK2 |= (1 << OCIE2A);
}

ISR(TIMER2_COMPA_vect){//timer1 interrupt 8kHz
    motor.rotate(leftsens.calculatePID(steeringPID));
}




#include "Arduino.h"
#include "led.h"

int _startval;
int _counter;
unsigned long _previousMillis = 0;
int _ledState = LOW; 

const long interval = 1000;
const int ledpin = 5;


LED::LED(){
}

LED::LED(int counter){
	_startval = counter;
  _counter = _startval;
}

boolean LED::blinkLed(boolean searchStartPos){
	unsigned long currentMillis = millis();
    if (currentMillis - _previousMillis >= interval) {
      _counter--;
      _previousMillis = currentMillis;
      _ledState = !_ledState;
      digitalWrite(ledpin, _ledState);
    }

    if (_counter == 0) {
      digitalWrite(ledpin, HIGH);
      return false;
    } else {
      return true;
    }
}

void LED::reinitialize(){
	  _counter = _startval;  
    digitalWrite(ledpin, LOW);

}

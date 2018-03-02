#ifndef led_h
#define led_h

#include "arduino.h"

class LED{
  public:
   LED();
	 LED(int counter);
  
	 boolean blinkLed(boolean searchStartPos);
	 void reinitialize();
  private:
    int _startval;
  	int _counter;
    unsigned long _previousMillis;
    int _ledState; 
};
#endif

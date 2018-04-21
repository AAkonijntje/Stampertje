#include <SoftwareSerial.h>

#define RX 4
#define TX 5
int count = 0;
int previousValue;
int currentValue;
unsigned long startTime, currentTime;
const double pi = 3.1415;

SoftwareSerial myserial(RX, TX);
void setup()
{
  //Serial.begin(9600);
  myserial.begin(9600);
  pinMode(2, INPUT);
  startTime = millis();
}
void loop()
{
  //myserial.println("Hello World");
  //snelheid bepalen
  currentValue = digitalRead(2);
  //Serial.println(currentValue);
  if (currentValue == 0 && previousValue == 1) {
    count += 1;
    //Serial.println(count);
  }
  

  if (count == 3) {
    unsigned long currentTime = millis();
    //Serial.println("StartTime" + String(startTime));
    //Serial.println("CurrentTime" + String(currentTime));
    unsigned long ElapsedTime = currentTime - startTime;
    myserial.println("De snelheid is: " + String(3 * 6.9 * pi / ElapsedTime, 4));
    //Serial.println("De snelheid is: " + String(3 * 6.9 * pi / ElapsedTime, 4));
    count = 0;
    startTime = currentTime;
  }
  previousValue = currentValue;

}


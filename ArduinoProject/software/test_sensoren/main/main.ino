
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);//wit sensor: links
  pinMode(A1, INPUT);//zwart senor: rechts
  pinMode(A2, INPUT);//wit sensor: links
  pinMode(A3, INPUT);//zwart senor: rechts
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(int(analogRead(A0)));
  Serial.print("    -    ");
  Serial.print(int(analogRead(A1)));
  Serial.print("    -    ");
  Serial.print(int(analogRead(A2)));
  Serial.print("    -    ");
  Serial.print(int(analogRead(A3)));
}

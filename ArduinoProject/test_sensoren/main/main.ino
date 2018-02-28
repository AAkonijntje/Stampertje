int W_sens=0;
int Z_sens=0;
int Z_ref, W_ref;

const int div_val = 50;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);//wit sensor: links
  pinMode(A1, INPUT);//zwart senor: rechts
}

void loop() {
  // put your main code here, to run repeatedly:
  W_ref = int(analogRead(A0)/div_val);
  Z_ref = int(analogRead(A1)/div_val);

  Serial.print("witte sensor: ");
  Serial.println(W_ref);

  Serial.print("zwarte sensor: ");
  Serial.println(Z_ref);
}

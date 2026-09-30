int EN2 = 5;
int IN3 = 2;
int IN4 = 3;
int potpin = A3;

void setup() {
  pinMode(EN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  
  int motorval = analogRead(potpin);
  int speed = map(motorval,0,1023,0,255);
  analogWrite(EN2, speed);
  
}
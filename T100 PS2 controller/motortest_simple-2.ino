int E1 = 10; // enable - with PWM
int M1 = 12;
int E2 = 11;
int M2 = 13;

int speed = 0;

void setup() {
  pinMode(M1, OUTPUT); // no need for analog output
  pinMode(M2, OUTPUT);
}

void loop() {
  // speed up
  digitalWrite(M1, LOW);
  digitalWrite(M2, LOW);
  analogWrite(E1, 255);
  analogWrite(E2, 255);
  delay(1000);
  digitalWrite(M1, HIGH);
  digitalWrite(M2, HIGH);
  analogWrite(E1, 0);
  analogWrite(E2, 0);
  delay(1000);
}

// Motortest T100 for Marie Curie School

int E1 = 10; // enable - with PWM
int M1 = 12;
int E2 = 11;
int M2 = 13;

void setup() {
  pinMode(M1, OUTPUT); // no need for analog output
  pinMode(M2, OUTPUT);
	Serial.begin(115200);
	Serial.print("Motorshield test for T100")
  delay(3000); // wait a 3 seconds  
  // enable
  analogWrite(E1, 255);
  analogWrite(E2, 255);
}

void loop() {
  // forward
  digitalWrite(M1, HIGH);
  digitalWrite(M2, HIGH);
	Serial.print("forward")
  delay(1000);
  // backward
  digitalWrite(M1, LOW);
  digitalWrite(M2, LOW);
	Serial.print("backward")
  delay(1000);
  // left
  digitalWrite(M1, LOW);
  digitalWrite(M2, HIGH);
	Serial.print("left")
  delay(1000);
  // right
  digitalWrite(M1, HIGH);
  digitalWrite(M2, LOW);
  delay(1000);  
}

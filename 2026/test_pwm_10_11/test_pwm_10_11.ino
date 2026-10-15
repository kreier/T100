// Motortest T100 with PWM for Marie Curie School
// Connected to L298N H-Bridge
// 10 - IN1 - motor 1 speed (PWM)
// 11 - IN4 - motor 2 speed (PWM)
// 12 - IN2 - motor 1 direction
// 13 - IN3 - motor 2 direction

void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  for (int s = 0; s <= 255; s += 5) { analogWrite(11, s); analogWrite(10, s); delay(300); }
  for (int s = 255; s >= 0; s -= 5) { analogWrite(11, s); analogWrite(10, s);delay(300); }
}
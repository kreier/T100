#include <AFMotor.h>
#include <SoftwareSerial.h>
 
AF_DCMotor motor1(1, MOTOR12_64KHZ); // create motor #1, 64KHz pwm
AF_DCMotor motor4(4, MOTOR12_64KHZ); // create motor #2, 64KHz pwm
SoftwareSerial BTSerial(2, 3);   // RX | TX
char BTinput = '0';

void setup() {
  motor1.setSpeed(100);
  motor4.setSpeed(100);     // set the speed to 200/255
  BTSerial.begin(38400);  // HC-05 default speed in AT   
}
 
void loop() {
  if (BTSerial.available()) 
  {
    BTinput = BTSerial.read();
    if (BTinput == 'U')// up
    {
      motor1.run(FORWARD);
      motor4.run(FORWARD);
    }
    if (BTinput == 'D')// down
    {
      motor1.run(BACKWARD);
      motor4.run(BACKWARD);
    }
    if (BTinput == 'L')// left
    {
      motor1.run(FORWARD);
      motor4.run(BACKWARD);
    }
    if (BTinput == 'R')// right
    {
      motor1.run(BACKWARD);
      motor4.run(FORWARD);
    }      
    if (BTinput == '0')
    {
      motor1.run(RELEASE);      // stopped
      motor4.run(RELEASE);
    }
    if (BTinput == 'T')// down
    {
      motor1.setSpeed(254);
      motor4.setSpeed(254);
    }
    if (BTinput == 'o')// left
    {
      motor1.setSpeed(100);
      motor4.setSpeed(100);
    }    
  }
}

#include <Servo.h>

Servo servoLeft;
Servo servoRight;

void setup() {
  servoLeft.attach(13);
  servoRight.attach(12);
  servoRight.writeMicroseconds(1700);
  servoLeft.writeMicroseconds(1300);
}

void loop() {
  // put your main code here, to run repeatedly:
}

#include <Servo.h>

Servo servoLeft;
Servo servoRight; 

void setup() {
  // put your setup code here, to run once:
  tone(4, 3000, 1000);                       // Play tone for 1 second
  delay(1000);                               // Delay to finish tone

  servoLeft.attach(13);                      // Attach left signal to pin 13
  servoRight.attach(12);                     // Attach right signal to pin 12

  // Full speed forward
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1300);        // Right wheel clockwise
  delay(10000);                              // ...for 10 seconds
 
  servoLeft.detach();                        // Stop sending servo signals
  servoRight.detach();
}

void loop() {
  // put your main code here, to run repeatedly:

}

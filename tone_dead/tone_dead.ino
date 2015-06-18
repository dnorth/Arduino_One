#include <Servo.h>
Servo servoLeft;  
Servo servoRight;// Declare left servo signal

void setup() {
  tone(4, 400, 500);
  delay(500);
  tone(4, 300, 1200);
  delay(1200);
  
  servoLeft.attach(13);                      // Attach left signal to pin 13
  servoRight.attach(12);                     // Attach right signal to pin 12

  // Full speed forward
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1300);        // Right wheel clockwise
  delay(3000);                               // ...for 3 seconds
 
  servoLeft.detach();                        // Stop sending servo signals
  servoRight.detach();
}

void loop()                                  // Main loop auto-repeats
{
}

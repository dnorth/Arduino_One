#include <Servo.h>
Servo leftServo;
Servo rightServo;

void setup() {
  leftServo.attach(13);
  rightServo.attach(12);
  
  tone(4, 3000, 1000);
  delay(1000);

  
  //leftServo.detach();
  //rightServo.detach();
}

void loop() {
  
  //Full Speed Forward
  //leftServo.writeMicroseconds(1700);
  //rightServo.writeMicroseconds(1300);
  //delay(2000);
  
  //Left Turn
  //leftServo.writeMicroseconds(1300);
  //rightServo.writeMicroseconds(1300);
  //delay(580);

  //Right Turn
  leftServo.writeMicroseconds(1640);
  rightServo.writeMicroseconds(1640);
  delay(580);
  leftServo.writeMicroseconds(1500);
  rightServo.writeMicroseconds(1500);
  delay(2000);
  
  //Full Speed Backwards
  //leftServo.writeMicroseconds(1300);
  //rightServo.writeMicroseconds(1700);
  //delay(2000);
}

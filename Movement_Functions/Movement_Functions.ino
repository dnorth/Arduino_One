#include <Servo.h>
Servo leftServo;
Servo rightServo;

void setup() {
  leftServo.attach(13);
  rightServo.attach(12);
  
  tone(4, 3000, 1000);
  delay(1000);
}

void loop() {
  
}

void forward(int time)
{
    //Full Speed Forward
  leftServo.writeMicroseconds(1700);
  rightServo.writeMicroseconds(1300);
  delay(time);
}

void backwards(int time)
{
  //Full Speed Backwards
  leftServo.writeMicroseconds(1300);
  rightServo.writeMicroseconds(1700);
  delay(time);
}

void turnRight(int time)
{
   leftServo.writeMicroseconds(1640);
  rightServo.writeMicroseconds(1640);
  delay(time); 
}

void turnLeft(int time)
{
  leftServo.writeMicroseconds(1300);
  rightServo.writeMicroseconds(1300);
  delay(time);
}

void turnLeft_90()
{
   //Left Turn 90 Degrees
  leftServo.writeMicroseconds(1300);
  rightServo.writeMicroseconds(1300);
  delay(580);
}

void turnRight_90()
{
  //Right Turn 90 Degrees
  leftServo.writeMicroseconds(1640);
  rightServo.writeMicroseconds(1640);
  delay(580);
}

void disableServos()
{
 leftServo.detach();
 rightServo.detach(); 
}

void maneuver(int speedLeft, int speedRight, int msTime)
{
  // speedLeft, speedRight ranges: Backward  Linear  Stop  Linear   Forward
  //                               -200      -100......0......100       200
  leftServo.writeMicroseconds(1500 + speedLeft);   // Set Left servo speed
  rightServo.writeMicroseconds(1500 - speedRight); // Set right servo speed
  if(msTime==-1)                                   // if msTime = -1
  {                                  
    leftServo.detach();                            // Stop servo signals
    rightServo.detach();   
  }
  delay(msTime);                                   // Delay for msTime
}

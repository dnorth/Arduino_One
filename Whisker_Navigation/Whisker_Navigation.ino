#include <Servo.h>

Servo leftServo;
Servo rightServo;

void setup() {
  leftServo.attach(13);
  rightServo.attach(12);
  
  tone(4, 3000, 1000);
  delay(1000);
  pinMode(7, INPUT);
  pinMode(5, INPUT);
  pinMode(2, OUTPUT);
  pinMode(8, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  
  byte wLeft = digitalRead(5);
  byte wRight = digitalRead(7);
  
  Serial.print(wLeft);
  Serial.println(wRight);

  if(wLeft == 0 && wRight == 0) {
    
    digitalWrite(8, HIGH);
    digitalWrite(2, HIGH);
    backwards(1000);
    turnRight_90();
    turnRight_90();
    
  } else if(wLeft == 0) {
    
    digitalWrite(8, HIGH);
    backwards(1000);
    turnRight_90();
    
  } else if (wRight == 0){
    
    digitalWrite(2, HIGH);
    backwards(1000);
    turnLeft_90();
    
  } else {
    
    digitalWrite(8, LOW);
    digitalWrite(2, LOW);
    forward(20); 
    
  }
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


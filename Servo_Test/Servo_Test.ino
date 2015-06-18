#include <Servo.h>                           // Include servo library
 
Servo servoRight;                            // Declare right servo
Servo servoLeft;
void setup()                                
{
  servoRight.attach(12);                    
  servoLeft.attach(13);
  
  servoRight.writeMicroseconds(1300); 
  servoLeft.writeMicroseconds(1500);
  delay(3000);                        
 
  servoRight.writeMicroseconds(1500); 
  servoLeft.writeMicroseconds(1700);
  delay(3000);

  servoRight.writeMicroseconds(1700);
  servoLeft.writeMicroseconds(1500);
  delay(3000); 
 
  servoRight.detach();
  servoLeft.detach();

}  
 
void loop()                                 
{                                         
}

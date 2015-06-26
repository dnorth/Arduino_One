void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("A3 = ");
  Serial.print(volts(A3));
  Serial.println(" volts");
  delay(1000);
}

float volts(int analogPin)
{
 return float(analogRead(analogPin)) * 5.0 / 1024.0; 
}

//low light = .01 volts
//ambient light = .10-.15 volts
//Really Bright Light = 2.00+ volts


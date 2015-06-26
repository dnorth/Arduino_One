void setup() {
  tone(4, 3000, 1000);
  delay(1000);
  
  Serial.begin(9600);
}

void loop() {
  float tLeft = float(rcTime(8));
  float tRight = float(rcTime(6));
  
  float ndShade;
  ndShade = tRight / (tLeft + tRight) - 0.5;
  
  Serial.println("tLeft     ndShade     tRight");
  
  Serial.print(tLeft);
  Serial.print("   ");
  Serial.print(ndShade);
  Serial.print("   ");
  Serial.print(tRight);
  Serial.println(" ");
  
  delay(1000);
}

long rcTime(int pin)
{
  //Set the capacitor to charge 
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH); //Fill the capacitor
  delay(5); //for 5ms
  pinMode(pin, INPUT); //Set to read the capacitor
  digitalWrite(pin, LOW); //Drain the capacitor
  long time = micros(); //Start the timer
  while(digitalRead(pin)); //While there is charge in the pin
  time = micros() - time; //Count how long it took 
  return time;
}

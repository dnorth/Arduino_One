void setup() {
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

  if(wLeft == 0) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8, LOW);
  }
  
  if(wRight == 0) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);  
  }
  
  delay(50);
}

void setup() {
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);
  digitalWrite(10, HIGH);
  delay(1000);
  
  digitalWrite(12, LOW);
  delay(1000);
  
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  delay(1000);
  
  digitalWrite(12, LOW);
  delay(1000);            
}

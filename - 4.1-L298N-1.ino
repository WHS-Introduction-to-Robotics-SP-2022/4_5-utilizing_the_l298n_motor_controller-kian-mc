
/*

*/


void setup() {
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(9,HIGH);
  analogWrite(11, 255);
  delay(5000);
  analogWrite(11, 0);
}

void loop() {
  
  
}

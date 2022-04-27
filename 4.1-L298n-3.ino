
/*

*/
int x = 0;

void setup() {
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);

  analogWrite(11,127);
  delay(3000);
  analogWrite(11,0);
  delay(2000);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  analogWrite(11,255);
  delay(2000);
  analogWrite(11,0);
  
}

void loop() {


}

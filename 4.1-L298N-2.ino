
/*

*/
int x = 0;

void setup() {
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);

  for(x=0;x<=255;x++) {
    analogWrite(11, x);
    delay(20);

  }

  for(x=255; x>=0;x--) {
    analogWrite(11, x);
    delay(20);

  }
}

void loop() {


}

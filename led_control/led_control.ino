void setup() {
  pinMode(13,OUTPUT);
  pinMode(10,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(100);
  digitalWrite(10,HIGH);
  delay(50);
  digitalWrite(10, LOW);
  delay(50);
  // 500 is half a second
  // put your main code here, to run repeatedly:
}

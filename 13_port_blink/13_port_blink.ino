void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  // 1000 msc = 1 sec
  delay(1000);
  digitalWrite(13,LOW);
  delay(10);
}

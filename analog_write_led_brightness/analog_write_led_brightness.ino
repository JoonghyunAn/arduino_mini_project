int redPin = 9;
int bright1 = 10;
int bright2 = 125;
int bright3 = 255;
int del  = 5000;

void setup() {
  pinMode(redPin, OUTPUT);


  // put your setup code here, to run once:
}

void loop() {
  analogWrite(redPin,bright1);
  delay(del);

  analogWrite(redPin, bright2);
  delay(del);

  analogWrite(redPin,bright3);
  delay(del);

  // put your main code here, to run repeatedly:
}

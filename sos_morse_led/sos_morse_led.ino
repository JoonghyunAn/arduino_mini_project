int redLED=4;
int dit=250;
int dah=700;
int longD=2000;

void setup() {
  pinMode(redLED,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  // S in morse code
  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);
  
  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);

  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);


// O in morse code
  digitalWrite(redLED,HIGH);
  delay(dah);
  digitalWrite(redLED,LOW);
  delay(dah);

  digitalWrite(redLED,HIGH);
  delay(dah);
  digitalWrite(redLED,LOW);
  delay(dah);

  digitalWrite(redLED,HIGH);
  delay(dah);
  digitalWrite(redLED,LOW);
  delay(dah);


// S in morse code
  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);
  
  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);

  digitalWrite(redLED,HIGH);
  delay(dit);
  digitalWrite(redLED,LOW);
  delay(dit);

  delay(longD);



  // put your main code here, to run repeatedly:
}

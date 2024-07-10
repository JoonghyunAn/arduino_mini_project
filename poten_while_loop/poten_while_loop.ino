int potenVal;
int delayTime = 100;
int potenPin = A1;
int redPin = 7;


void setup() {
  Serial.begin(9600);
  pinMode(potenPin, INPUT);
  pinMode(redPin, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
potenVal = analogRead(potenPin);
Serial.println(potenVal);
delay(delayTime);

while(potenVal>=1000){
  digitalWrite(redPin, HIGH);
  potenVal = analogRead(potenPin);
  delay(delayTime);
}
digitalWrite(redPin,LOW);
  // put your main code here, to run repeatedly:
}

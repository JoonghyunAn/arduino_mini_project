int redPin=8;
int greenPin = 9;
int bluePin = 10;
String myColor;
String msg = "what color do you want?";

void setup() {
  
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  Serial.println(msg);
  while(Serial.available()==0){

  }
myColor = Serial.readString();
if (myColor=="white") {
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,HIGH);
}
if (myColor=="lightgreen") {
  analogWrite(redPin, 50);
  analogWrite(greenPin,200);
  analogWrite(bluePin,50);
}
if (myColor=="purple") {
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
}
if (myColor=="off") {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  // put your main code here, to run repeatedly:
}
}
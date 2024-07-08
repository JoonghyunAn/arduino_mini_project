int potenPin=A1;
int gPin = 6;
int potenVal ;
float ledVal;

void setup() {
pinMode(potenPin, INPUT);
pinMode(gPin, OUTPUT);
Serial.begin(9600);
  
  // put your setup code here, to run once:
}

void loop() {
  potenVal = analogRead(potenPin);
  ledVal = (255./1023) * potenVal;
  
  analogWrite(gPin, ledVal);
  Serial.println(ledVal);
  // put your main code here, to run repeatedly:
}

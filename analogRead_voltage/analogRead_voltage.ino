int readPin = A3;
float V2; 
int readVal;
int delayTime=500;

void setup() {
  pinMode(readPin, INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(readPin);
  V2 = (5./1023.)*readVal;
  Serial.println(V2);
  delay(delayTime);
}

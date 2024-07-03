int myPin = A2;
int redPin = 9;
int readVal;
float V2;
int delayT = 500;



void setup() {
  Serial.begin(9600); 
  pinMode(myPin, INPUT);
  pinMode(redPin, OUTPUT);
  // for serial monitor 
}

void loop() {
  readVal=analogRead(myPin);
  V2 = (5./1023.)*readVal;
  Serial.print("Potentiometer Voltage is ");
  Serial.println(V2);
  if (V2>2 && V2<3){
    digitalWrite(redPin,HIGH);
  }
  if (V2 <2 || V2>3){
    digitalWrite(redPin, LOW);
  }
  // if (V2> 4.0){
  //   digitalWrite(redPin, HIGH);
  //   Serial.println("WARNING! LOWER THE VOLTAGE");
  // }
  // if (V2<4.0){
  //   digitalWrite(redPin, LOW);
  // }
  delay(delayT);
  // put your main code here, to run repeatedly:
}

// yello pin 6 blink 3 
// red pin 9  blink 5

int yellowPin = 6;
int redPin = 9;
int delayT = 500;
int yellowBlink = 3;
int redBlink = 5 ;
int j ;
void setup() {
  pinMode(yellowPin,OUTPUT);
  pinMode(redPin,OUTPUT);
  Serial.begin(9600);

  // put your setup code here, to run once:
}

void loop() {
  // yellowPin x 3
  for(j=1;j<=yellowBlink;j=j+1){
  digitalWrite(yellowPin, HIGH);
  delay(delayT);
  digitalWrite(yellowPin, LOW);
  delay(delayT);
}

  // redPin * 5
  for(j=1;j<=redBlink;j=j+1){
  digitalWrite(redPin, HIGH);
  delay(delayT);
  digitalWrite(redPin, LOW);
  delay(delayT);}

  // put your main code here, to run repeatedly:
}

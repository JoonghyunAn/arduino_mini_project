int numBlinks;
String msg="How Many Blinks Do You Want";
String msg2 = "Your Number is : ";
int j;
int bt = 500;
int redPin=12;


void setup() {
  
Serial.begin(9600);
pinMode(redPin,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
Serial.println(msg);
while (Serial.available() == 0){

}
numBlinks = Serial.parseInt();
for (j=1;j<=numBlinks; j=j+1){
  digitalWrite(redPin, HIGH);
  delay(bt);
  digitalWrite(redPin, LOW);
  delay(bt);
}
}

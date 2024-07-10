int j;
int delayTime=500;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  for(j=10; j>=0; j=j-1){
    Serial.println(j);
    delay(delayTime);

  }
  Serial.println();
  
  
  // put your main code here, to run repeatedly:
}

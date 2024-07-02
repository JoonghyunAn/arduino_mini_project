int j = 1 ; 
int waitT = 750;
int x = 12;
int y = 11;
int z;
String myString=" + ";
String message1 = "A circle with radius ";
String message2 = " has an area of ";
String message3 = ".";
float pi=3.14;
float r=0;
float area;

void setup() {
Serial.begin(115200);  // put your setup code here, to run once:
}

void loop() {
  area = pi*r*r ;
  Serial.print(message1);
  Serial.print(r);
  Serial.print(message2);
  Serial.print(area);
  Serial.println(message3);
  delay(waitT);
  r = r+ .5;
  // put your main code here, to run repeatedly:
}

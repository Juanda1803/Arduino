void setup(){
  pinMode(13,OUTPUT);
  //pin 13 as output
}
void loop(){
  digitalWrite(13,HIGH);
  //pin 13 high(1)
  delay(1000);
  //1 sec delay
  digitalWrite(13,LOW);
  //pin 13 low(0)
  delay(1000);
  //1 sec delay
}

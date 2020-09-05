void setup (){
  pinMode(2,INPUT);
  //pin 2 as input
  pinMode(3,OUTPUT);
  pin 3 as output
}
void loop(){
  //I evaluate if the input
  //is at a high level
  if(digitalRead(2) == HIGH){
    digitalWrite(3,HIGH);
    //I turn on the led
  }
  else{
    digitalWrite(3,LOW);
    //I turn off the led
  }
}

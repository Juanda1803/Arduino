int PULSADOR = 2;
int LED = 3;
int ESTADO = LOW;

void setup() {
 pinMode(PULSADOR,INPUT);
 //pin 2 as input
 pinMode(LED,OUTPUT);
 //pin 3 as output
}

void loop() {
  while(digitalRead(PULSADOR) == LOW){
    //wait for the button to be pressed
  }
  ESTADO = digitalRead(LED);
  //I read led status
  digitalWrite(LED, !ESTADO);
  //I write the opposite value
  while(digitalRead(PULSADOR) == HIGH){
     //Anti rebound
  };
}

int i;
int pot = 0;
int LED = 3;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  i = analogRead(pot);
  analogWrite(LED, i / 4);
}

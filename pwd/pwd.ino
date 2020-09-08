int LED = 3;
int i;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  for (i = 0; i < 256; i++)
  {
    analogWrite(LED, i);
    delay(5);
  }
  for (i = 255; i >= 0; i--)
  {
    analogWrite(LED, i);
    delay(5);
  }
}

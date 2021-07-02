void setup()
{
  for(int i=3;i<7;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
}
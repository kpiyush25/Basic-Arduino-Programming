int i;

void setup()
{
  pinMode(11, OUTPUT);
}

void loop()
{
  for(i=10;i<=255;i+=10)
  {
    analogWrite(11,i);
    delay(100);
  }
}
/* If you are using digital pins for different values of 
   brightness then use PWM pins (those with -ve signs)
*/

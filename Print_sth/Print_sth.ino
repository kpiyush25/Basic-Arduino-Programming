void setup()
{
  Serial.begin(9600);//initialising serial communication. 
  //9600 is our rate at which data is transferred...bits/sec
  //serial comm is the comm b/w arduino and serial monitor.n
}

void loop()
{
  Serial.println("HELLO WORLD");//HELLO WORLD will be printed on every line in output in serial monitor.
}
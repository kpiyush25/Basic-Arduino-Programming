void setup()
{
  Serial.begin(115200);//115200 is baud rate
  for(int i=0;i<=10;i++){
    Serial.println(i);
  }
}

void loop()
{
  
}
/*The baud rate is the rate at which information is 
transferred in a communication channel. Baud rate is 
commonly used when discussing electronics that use 
serial communication. In the serial port context, 
"9600 baud" means that the serial port is capable of
transferring a maximum of 9600 bits per second.
*/
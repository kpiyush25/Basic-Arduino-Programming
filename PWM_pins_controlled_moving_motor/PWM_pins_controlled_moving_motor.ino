void setup()
{
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop()
{
  digitalWrite(3,HIGH);
  digitalWrite(5,LOW);
  delay(5000);
  digitalWrite(5,HIGH);
  digitalWrite(3,LOW);
  delay(5000);
  
  //for(int i=0;i<=255;i+=10){
   // analogWrite(3,i);
    //delay(2000);
    //analogWrite(5,0);
  //}
  
}

/*Use PWM pins to control the speed of the motor.
Some disadvantages in analog and it will be told later.
*/
int amn;

void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);//Initialising serial communication.
}

void loop()
{
  if(Serial.available())  //if there is any incoming serial data to the serial monitor
  {
    amn=Serial.read();//whatever data is given to amn ,it is read as input.
    if(amn =='H'){
      digitalWrite(13,HIGH);
      //type 'H' and send to the serial monitor
    }
    if(amn == 'L'){
      digitalWrite(13,LOW);
      //type 'L' and send to the serial monitor
    }
  }
}
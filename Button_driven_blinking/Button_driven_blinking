void setup()
{
  pinMode(10, INPUT_PULLUP);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int buttonValue = digitalRead(10);//digitalRead is used for input.
  Serial.println(buttonValue);
  if(buttonValue == LOW){
    digitalWrite(13,HIGH);
  }
  else {
    digitalWrite(13,LOW);
  }
}
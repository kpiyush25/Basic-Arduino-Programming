void setup()
{
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int pot = analogRead(A0);//input values from pot
  int led_val = map(pot,0,1023,0,255);//mapping
  Serial.println(led_val);//print led_val
  analogWrite(11,led_val);
}

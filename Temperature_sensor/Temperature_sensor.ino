void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float sensorValue= analogRead(A0);
  Serial.println(sensorValue);
  float volt = (sensorValue/1023) * 4.9;
  float temp = (volt-0.5) * 100;
  Serial.println(temp);
}
void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int pot1 = analogRead(A0);
  int pot2 = analogRead(A1);
  int pot3 = analogRead(A2);
  
  int red_led_val = map(pot1,0,1023,0,255);
  int blue_led_val = map(pot2,0,1023,0,255);
  int green_led_val = map(pot3,0,1023,0,255);
  
  Serial.println(red_led_val);
  Serial.println(blue_led_val);
  Serial.println(green_led_val);
  
  analogWrite(11, red_led_val);
  analogWrite(10, blue_led_val);
  analogWrite(9, green_led_val);
    
}
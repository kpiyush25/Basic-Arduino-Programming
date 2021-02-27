#include <Servo.h> //include servo library

Servo Servo1; //Servo1 is a object of Servo just like those in C++ OOP
void setup()
{
  digitalWrite(3,OUTPUT);
  Servo1.attach(3);
}

void loop()
{
  Servo1.write(0); //makes the servo to go to 0 degree.
  delay(1000);
  Servo1.write(90); //makes the servo to go to 90 degree.
  delay(1000);
}
#include<Keypad.h>
const int numRows = 4;
const int numCols = 4;
char keymap[numRows][numCols] = 
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[numRows]={9,8,7,6};
byte colPins[numCols]={5,4,3,2};

Keypad myKeypad = Keypad(makeKeymap(keymap),rowPins,colPins,numRows,numCols);

void setup()
{
  pinMode(13,OUTPUT);
}

void loop()
{
  char keypressed = myKeypad.getKey();
  if(keypressed=='0')
  {
    digitalWrite(13,LOW);
  }
  else if(keypressed=='8')
  {
    digitalWrite(13,HIGH);
  }
}
//Say ,if you press'1' and '0' from your keypad ,the LED should be HIGH 
//and if you press '2' and '0' from your keypad ,the LED should be LOW 
//Here I have used '8' for LED to be on and '0' for the LED to be off.
#include<Keypad.h> //including keypad library
const int numRows = 4; //number of rows
const int numCols = 4; //number of columns
char keymap[numRows][numCols] =
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[numRows] = {9,8,7,6}; //rowpins connected to arduino
byte colPins[numCols] = {5,4,3,2}; // colpins connected to arduino

Keypad myKeypad = Keypad(makeKeymap(keymap),rowPins,colPins,numRows,numCols);

void setup()
{
  //no pinModes as there is neither power connection nor ground in the keypad.
  Serial.begin(9600);
}

void loop()
{
  char keypressed = myKeypad.getKey();
  if(keypressed) 
  {
    Serial.println(keypressed);
  }
}

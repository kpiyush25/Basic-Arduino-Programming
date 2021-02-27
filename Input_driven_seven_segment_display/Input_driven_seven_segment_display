int inp;
void setup()
{
  for(int i=2;i<9;i++)
  {
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available())
  {
    inp=Serial.read();
    if(inp=='0')
    {
      for(int j=2;j<8;j++)
      {
        digitalWrite(j,HIGH);
      }
      digitalWrite(8,LOW);
    }
    else if(inp=='1')
    {
      for(int j=2;j<9;j++)
      {
        if(j==3 || j==4) digitalWrite(j,HIGH);
        else digitalWrite(j,LOW);
      }
    }
    else if(inp=='2')
    {
      for(int j=2;j<9;j++)
      {
        if(j==4 || j==7) digitalWrite(j,LOW);
        else digitalWrite(j,HIGH);
      }
    }
    else if(inp=='3')
    {
      for(int j=2;j<9;j++)
      {
        if(j==6 || j==7) digitalWrite(j,LOW);
        else digitalWrite(j,HIGH);
      }
    }
    else if(inp=='4')
    {
      for(int j=2;j<9;j++)
      {
        if(j==2 || j==5 || j==6) digitalWrite(j,LOW);
        else digitalWrite(j,HIGH);
      }
    }
    else if(inp=='5')
    {
      for(int j=2;j<9;j++)
      {
        if(j==3 || j==6) digitalWrite(j,LOW);
        else digitalWrite(j,HIGH);
      }
    }
    else if(inp=='6')
    {
      for(int j=2;j<9;j++)
      {
        if(j==3) digitalWrite(j,LOW);
        else digitalWrite(j,HIGH);
      }
    }
    else if(inp=='7')
    {
      for(int j=2;j<9;j++)
      {
        if(j==2 || j==3 || j==4) digitalWrite(j,HIGH);
        else digitalWrite(j,LOW);
      }
    }
    else if(inp=='8')
    {
      for(int j=2;j<9;j++)
      {
        digitalWrite(j,HIGH);
      }
    }
    else if(inp=='9')
    {
      for(int j=2;j<9;j++)
      {
        if(j==6) digitalWrite(j,LOW);
        else digitalWrite(j,HIGH);
      }
    }
    
  }
}
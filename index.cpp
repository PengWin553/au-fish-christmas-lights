int i = 0;
int p3_i = 0;

void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(A0, OUTPUT); //pin 15
  pinMode(A1, OUTPUT); //pin 16
  pinMode(A2, OUTPUT); //pin 17 (eye)
}
void loop()
{ 
  firstPattern();
  secondPattern();
}

// blink LEDs one at a time: from top tail
void firstPattern()
{
  
  eyeBlinking();

  for(i=1; i<=16; i++)
  {
   
    
    if(i == 13) // After pin 13, blink pin 2 again
    {
      digitalWrite(2, HIGH);
      delay(100);
      digitalWrite(2, LOW);
      delay(100);
    }
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
    delay(100);
  }
}

// blink LEDs one at a time: from bottom tail
void secondPattern()
{
  	eyeBlinking();
  
    for(i=14; i>=0; i--)
    {
      if(i == 13)
      {
        digitalWrite(2, HIGH);
        delay(100);
        digitalWrite(2, LOW);
        delay(100);
      }

      digitalWrite(i, HIGH);
      delay(100);
      digitalWrite(i, LOW);
      delay(100);
    }
}

// eye blinking
void eyeBlinking()
{
    digitalWrite(A2, HIGH);
  	delay(100);
  	digitalWrite(A2, LOW);
  
    digitalWrite(A2, HIGH);
  	delay(100);
  	digitalWrite(A2, LOW);
}
// C++ code
//
int buttonApin = 5;
int buttonBpin = 6;
int val = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);
  Serial.begin(9600);
  digitalWrite(LED_BUILTIN, HIGH);
}

void loop()
{
  delay(100);
  Serial.println(val);
  if (digitalRead(buttonApin) == LOW)
  {
    val+=1;
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    val-=1;
  }
  analogWrite(11, val);
}

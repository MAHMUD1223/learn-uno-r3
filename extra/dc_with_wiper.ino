// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  delay(1000);
  int val=analogRead(A0);
  Serial.println(val);
  analogWrite(11, val);
}

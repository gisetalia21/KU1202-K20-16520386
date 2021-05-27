void setup()
{
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(0, HIGH);
  digitalWrite(10, HIGH);
  analogWrite(11, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}

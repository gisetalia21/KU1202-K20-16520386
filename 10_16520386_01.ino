void setup()
{
  pinMode(7, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}

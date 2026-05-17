// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(3, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
}
int counter;

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);

  for (counter = 0; counter < 10; ++counter) {
    digitalWrite(7, HIGH);
    delay(5000); // Wait for 5000 millisecond(s)
    digitalWrite(7, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(6, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(6, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(5, HIGH);
    delay(5000); // Wait for 5000 millisecond(s)
    digitalWrite(5, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
}

void loop()
{
  delay(10); // Delay a little bit to improve simulation performance
}

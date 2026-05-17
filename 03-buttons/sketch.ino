int ButtonState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(9, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  ButtonState = digitalRead(2);
  if (ButtonState == HIGH) {
    ButtonState = HIGH;
    digitalWrite(9, HIGH);
    digitalWrite(12, LOW);
  } else {
    digitalWrite(9, LOW);
    digitalWrite(12, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}

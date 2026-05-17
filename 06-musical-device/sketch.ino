void setup()
{
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
}

void loop()
{
  // Se premo il bottone di A0
  if (digitalRead(A0) == HIGH) {
    tone(8, 440, 1000); // play tone 57 (A4 = 440 Hz)
  }
  // Se premo il bottone di A1
  if (digitalRead(A1) == HIGH) {
    tone(8, 494, 1000); // play tone 59 (B4 = 494 Hz)
  }
  // Se premo il bottone di  A2
  if (digitalRead(A2) == HIGH) {
    tone(8, 523, 1000); // play tone 60 (C5 = 523 Hz)
  }
  // Se premo il bottone di A3
  if (digitalRead(A3) == HIGH) {
    tone(8, 587, 1000); // play tone 62 (D5 = 587 Hz)
  }
  // Se premo il bottone di A4
  if (digitalRead(A4) == HIGH) {
    tone(8, 880, 1000); // play tone 69 (A5 = 880 Hz)
  }
  delay(10); // Delay a little bit to improve simulation performance
}

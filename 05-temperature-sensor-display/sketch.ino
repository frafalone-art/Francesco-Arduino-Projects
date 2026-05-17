#include <Adafruit_LiquidCrystal.h>

int temperatura = 0;

int Temperature = 0;

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  lcd_1.begin(16, 2);
  pinMode(A0, INPUT);

  lcd_1.setCursor(0, 0);
}

void loop()
{
  lcd_1.clear();
  lcd_1.setCursor(0, 0);
  lcd_1.print((-40 + 0.488155 * (analogRead(A0) - 20)));
  
  delay(1000); // Wait for 1000 millisecond(s)
}

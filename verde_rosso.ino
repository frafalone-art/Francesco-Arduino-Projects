int bottoneRosso = 13;
int bottoneVerde = 12;
int ledRosso = 9;
int ledVerde = 7;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(bottoneRosso, INPUT);
pinMode(bottoneVerde, INPUT);
pinMode(ledRosso, OUTPUT);
pinMode(ledVerde, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(digitalRead(bottoneRosso) == HIGH){
  Serial.println("Premuto rosso");
  digitalWrite(ledRosso, HIGH);
  digitalWrite(ledVerde, LOw);
}
while(digitalRead(bottoneVerde) == HIGH){
  Serial.println("Premuto verde");
  digitalWrite(ledRosso, LOW);
  digitalWrite(ledVerde, HIGH);
 }
}

int rainsensor = A0;
int Buzzer = 13;
void setup(){
  pinMode(Buzzer, OUTPUT);
}

void loop(){
  int data1 = analogRead(rainsensor);
  if (data1 < 500) {
    digitalWrite(Buzzer, HIGH);
  }else {
    digitalWrite(Buzzer, LOW);
  }
  delay(1000);
}
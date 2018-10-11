/*
Лабораторна робота №2
Завдання : 7 світло діодів, поступовий рух одиночного вогника вперед і
назад
Порта з 2 до 13;

*/
int deLay = 100;
int button = 22;
void setup()
{
  for (int led = 2 ; led < 14; led++) {
    pinMode(led, OUTPUT);
  };
  pinMode(button, INPUT);
}
void loop()
{
if (digitalRead(button) == HIGH) {
  
  for (int led = 2; led < 14; led++) {
    digitalWrite(led, HIGH);
    delay(deLay);
    digitalWrite(led, LOW);
    delay(deLay);
  }
  for (int led = 13; led > 2; led--) {
    digitalWrite(led, HIGH);
    delay(deLay);
    digitalWrite(led, LOW);
    delay(deLay);
  }
}
}

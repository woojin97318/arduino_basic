int sw1 = 12;
int led1 = 10;
int sw2 = 5;
int led2 = 3;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
// sw를 인풋_풀업으로 하여 스위치가 열려있다면 HIGH
// 스위치가 닫혀있다면 LOW값을 반환
}

void loop() {
  if(digitalRead(sw1) == LOW) //스위치가 눌리면
    digitalWrite(led1, HIGH);
  else
    digitalWrite(led1, LOW); // 스위치가 닫히면 off

  if(digitalRead(sw2) == LOW) //스위치가 눌리면
    digitalWrite(led2, HIGH);
  else
    digitalWrite(led2, LOW); // 스위치가 닫히면 off
}

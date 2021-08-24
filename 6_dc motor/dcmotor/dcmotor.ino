int moter = 13;
int sw = 7;

void setup() {
  pinMode(moter, OUTPUT);
  pinMode(sw, INPUT_PULLUP);
}

void loop() {
 if(digitalRead(sw) == LOW) {
  digitalWrite(moter, LOW);
 } else {
  digitalWrite(moter, HIGH);
 }
}

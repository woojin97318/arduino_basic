int sensor = 9;
int Buzzer = 7;

void setup() {
  Serial.begin(9600);
  pinMode(Buzzer, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop() {
  int val = digitalRead(sensor);
  Serial.println(val);

  if (val == HIGH) {
    noTone(7);
    delay(100);
  } else {
    tone(7,220);
    delay(100);
  }

}

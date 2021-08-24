#include <Servo.h>
Servo servo;
int angle = 0;

void setup() {
  Serial.begin(9600);
  servo.attach(4);
}

void loop() {
  if(Serial.available() > 0);
  char inputkey = Serial.read();

  if(inputkey == '1') {
    angle += 30;
    servo.write(angle);
    if(angle == 240) {
      angle = 0;
      servo.write(angle);
    }
  }
  if(inputkey == '2') {
    servo.write(0);
  }
}

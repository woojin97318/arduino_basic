#include <SoftwareSerial.h>
SoftwareSerial bt(3, 2);
int red = 13;

void setup() {
  Serial.begin(9600);
  bt.begin(9600);
  pinMode(red, OUTPUT);
}

void loop() {
  if(bt.available()) {
    int data = bt.read();
    if(data==111){ // 111 = o
    digitalWrite(red, HIGH);  
    }else if(data==110){ // 110 = n
    digitalWrite(red, LOW);
    }
   Serial.write(bt.read());
  }
}

#include <SoftwareSerial.h>    //블루투스 시리얼 통신 라이브러리 추가

SoftwareSerial bt(3, 2); //블루투스 설정 BTSerial(Tx, Rx)

void setup() {
  Serial.begin(9600);
  bt.begin(9600);
}

void loop() {
  if(Serial.available()) {
    bt.write(Serial.read());
  }
  if(bt.available()) {
    Serial.write(bt.read());
  }
  
}

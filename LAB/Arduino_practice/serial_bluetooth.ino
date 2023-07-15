// 아두이노 시리얼 통신으로 블루투스 통신

#include <SoftwareSerial.h>

//블루투스모듈 HC-06(슬래이브만가능)으로 진행함
//블루투스모듈 HC-05(슬래이브 마스터둘다가능)는 조금 코드가 다르다
//HC-06 시리얼창에서 "line ending 없음" 설정할것

int Tx = 2; //전송 보내는핀
int Rx = 3; //수신 받는핀
int LED = 13;

SoftwareSerial BtSerial(Tx, Rx);

void setup() {
  Serial.begin(9600);
  BtSerial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  if (BtSerial.available()) {           // 만약 데이터가 들어오면
    String a;                         // a변수를 문자열로 선언
    a = BtSerial.readString();          // 데이터를 문자열로 읽어들여 a에 넣는다.

    if (a == "on") {                  // 읽어들인 문자열이 on이라면
      digitalWrite(LED, HIGH);         // led를 켠다.
      BtSerial.println("Led is ON");
    }               
    else if (a == "off") {            // 읽어들인 문자열이 off라면
      digitalWrite(LED, LOW);         // led를 끈다.
      BtSerial.println("Led is OFF");
    }
  }
}

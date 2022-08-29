// 아두이노 블루투스 통신(LED 조절) + 시리얼 통신(초음파 센서 활용하여 거리 측정 + 거리에 따른 LED 조절)

#include <SoftwareSerial.h>

#define TRIG 5
#define ECHO 4
#define RED 11
#define GREEN 10
#define BLUE 9

int Tx = 2; // 전송 보내는 핀
int Rx = 3; // 수신 받는 핀

SoftwareSerial BtSerial(Tx, Rx);

void setup() {
  Serial.begin(9600);
  BtSerial.begin(9600);

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() {
  LEDtoDISTANCE();

  if (BtSerial.available()) {         // 포트 COM 5 시리얼 모니터로 확인, 입력
    String a;                         // a변수를 문자열로 선언
    a = BtSerial.readString();        // 데이터를 문자열로 읽어들여 a에 넣는다.

    while (a == "RED IS ON") {        // "RED IS ON"이면 RED LED가 켜진다.
      LEDISOFF();
      analogWrite(11, 255);
      analogWrite(10, 0);
      analogWrite(9, 0);
      BtSerial.println("Red is ON");

      if (BtSerial.available()) {
        String a;
        a = BtSerial.readString();

        if (a == "RED IS OFF") {      // "RED IS OFF"이면 RED LED가 꺼진다.
          BtSerial.println("Red is OFF");
          break;
        }
      }
    }
    while (a == "GREEN IS ON") {      // "GREEN IS ON"이면 GREEN LED가 켜진다.
      LEDISOFF();
      analogWrite(10, 255);
      analogWrite(11, 0);
      analogWrite(9, 0);
      BtSerial.println("Green is ON");

      if (BtSerial.available()) {
        String a;
        a = BtSerial.readString();

        if (a == "GREEN IS OFF") {    // "GREEN IS OFF"이면 GREEN LED가 꺼진다.
          BtSerial.println("Green is OFF");
          break;
        }
      }
    }
    while (a == "BLUE IS ON") {       // "BLUE IS ON"이면 BLUE LED가 켜진다.
      LEDISOFF();
      analogWrite(9, 255);
      analogWrite(11, 0);
      analogWrite(10, 0);
      BtSerial.println("Green is ON");

      if (BtSerial.available()) {
        String a;
        a = BtSerial.readString();

        if (a == "BLUE IS OFF") {     // "BLUE IS OFF"이면 BLUE LED가 꺼진다.
          BtSerial.println("Blue is OFF");
          break;
        }
      }  
    }  
  }
}


// 사용자 정의 함수
void LEDtoDISTANCE() { // 거리에 따른 LED 조절 함수
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
 
  long distance = pulseIn(ECHO, HIGH) / 58.2;

  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);

  if (distance < 10) {
    analogWrite(RED, 255);
  }
  else if (distance < 20) {
    analogWrite(GREEN, 255);
  }
  else if (distance >= 20) {
    analogWrite(BLUE, 255);
  }

  Serial.print(distance); // 포트 COM 3 시리얼 모니터에 거리가 표시된다.
  Serial.println("cm");
  
  delay(100);
}

void LEDISOFF() { // 거리에 따른 LED 조절이 꺼지는 함수
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, LOW);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long distance = pulseIn(ECHO, LOW) / 58.2;

  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
}

// 초음파 센서

#define TRIG 2
#define ECHO 3
#define RED 11
#define GREEN 10
#define BLUE 9

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  LEDtoDISTANCE();

}

void LEDtoDISTANCE() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long distance = pulseIn(ECHO, HIGH) / 58.2;

  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);

  if(distance < 10){
    analogWrite(RED, 255);
  }
  else if(distance < 20){
    analogWrite(GREEN, 255);
  }
  else if(distance < 40){
    analogWrite(BLUE, 255);
  }

  delay(100);
}

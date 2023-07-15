// 초음파 센서 + LED + 모터 구동

#define TRIG 2
#define ECHO 3
#define RED 11
#define GREEN 12
#define BLUE 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
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
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    analogWrite(RED, 0);
    analogWrite(GREEN, 0);
    analogWrite(BLUE, 0);
    analogWrite(9, 0);
  }
  else if(distance < 20){
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    analogWrite(RED, 255);
    analogWrite(GREEN, 0);
    analogWrite(BLUE, 0);
    analogWrite(9, 50);
  }
  else if(distance < 30){
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    analogWrite(GREEN, 255);
    analogWrite(RED, 0);
    analogWrite(BLUE, 0);
    analogWrite(9, 100);
  }
  else if(distance > 30){
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    analogWrite(BLUE, 255);
    analogWrite(RED, 0);
    analogWrite(GREEN, 0);
    analogWrite(9, 200);
  }
  
  Serial.print(distance);
  Serial.println("cm");

  delay(100);

}

// 초음파 센서 + LED

#define TRIG 5
#define ECHO 4
#define RED 11
#define GREEN 10
#define BLUE 9

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

}

void loop() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long distance = pulseIn(ECHO, HIGH) *0.017; // /58.2

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
  
  Serial.print(distance);
  Serial.println("cm");
  
  delay(100);

}

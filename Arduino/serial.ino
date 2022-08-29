// 아두이노 시리얼 통신

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    String a;
    a = Serial.readString();

    if(a == "on"){
      digitalWrite(13, HIGH);
    }
    else if(a == "off"){
      digitalWrite(13, LOW);
    }
  }

}

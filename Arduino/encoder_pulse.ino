// 엔코더 펄스

#define encoderPinA  2
#define encoderPinB 3
#define encoderPinC 12
#define encoderPinD 13

#define driverPwmL  6
#define driverIn1 7
#define driverIn2 8
#define driverIn3 9
#define driverIn4 10
#define driverPwmR  11

int in1, in2, in3, in4;
int lefePWMoutput, rightPWMoutput;

float encoderPosLeft, encoderPosRight;

void doEncoderA() {
  encoderPosLeft  += (digitalRead(encoderPinA) == digitalRead(encoderPinB)) ? 1 : -1;
}
void doEncoderB() {
  encoderPosLeft  += (digitalRead(encoderPinA) == digitalRead(encoderPinB)) ? -1 : 1;
}
void doEncoderC() {
  encoderPosRight += (digitalRead(encoderPinC) == digitalRead(encoderPinD)) ? 1 : -1;
}
void doEncoderD() {
  encoderPosRight += (digitalRead(encoderPinC) == digitalRead(encoderPinD)) ? -1 : 1;
}
void interruptInit() {
  attachInterrupt(0, doEncoderA, CHANGE);   //mega pin 2
  attachInterrupt(1, doEncoderB, CHANGE);   //mega pin 3
  attachInterrupt(4, doEncoderC, CHANGE);   //mega pin 19
  attachInterrupt(5, doEncoderD, CHANGE);   //mega pin 18
}

void setup() {
  Serial.begin(9600);
  pinMode(driverPwmL, OUTPUT);
  pinMode(driverPwmR, OUTPUT);
  pinMode(driverIn1, OUTPUT);
  pinMode(driverIn2, OUTPUT);
  pinMode(driverIn3, OUTPUT);
  pinMode(driverIn4, OUTPUT);
  pinMode(encoderPinA, INPUT_PULLUP);
  pinMode(encoderPinB, INPUT_PULLUP);
  pinMode(encoderPinC, INPUT_PULLUP);
  pinMode(encoderPinD, INPUT_PULLUP);
  interruptInit();
  digitalWrite(driverIn1, LOW);
  digitalWrite(driverIn2, LOW);
  digitalWrite(driverIn3, LOW);
  digitalWrite(driverIn4, LOW);
  analogWrite(driverPwmL, 0);
  analogWrite(driverPwmR, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("left:");
  Serial.print(encoderPosLeft);
  Serial.print(" / right:");
  Serial.println(encoderPosRight);
}

void driverSet(int Lpwm, int drivein1, int drivein2, int drivein3, int drivein4, int Rpwm) {
  in1 = drivein1;
  in2 = drivein2;
  in3 = drivein3;
  in4 = drivein4;
  lefePWMoutput = Lpwm;
  rightPWMoutput = Rpwm;
  lefePWMoutput = (Lpwm > 255) ? 255 : Lpwm;
  rightPWMoutput = (Rpwm > 255) ? 255 : Rpwm;
  lefePWMoutput = (Lpwm < 0) ? 0 : Lpwm;
  rightPWMoutput = (Rpwm < 0) ? 0 : Rpwm;

  //all low protect motor driver
  digitalWrite(driverIn1, LOW);
  digitalWrite(driverIn2, LOW);
  digitalWrite(driverIn3, LOW);
  digitalWrite(driverIn4, LOW);
  delay(200);   //essential code protect for motor driver
  digitalWrite(driverIn1, in1);
  digitalWrite(driverIn2, in2);
  digitalWrite(driverIn3, in3);
  digitalWrite(driverIn4, in4);
}

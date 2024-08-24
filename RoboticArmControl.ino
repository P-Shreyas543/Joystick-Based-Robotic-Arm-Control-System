#include <Servo.h>

int ServoHorizontalPin = 5;
int ServoVerticalPin = 6;
int ServoRightPin = 9;
int ServoLeftPin = 10;

int HorizontalPotPin = A0;
int VerticalPotPin = A1;
int LeftPotPin = A2;
int RightPotPin = A3;

int ServoH_Min = 0;
int ServoH_Max = 180;

int ServoV_Min = 0;
int ServoV_Max = 180;

int ServoR_Min = 0;
int ServoR_Max = 180;

int ServoL_Min = 0;
int ServoL_Max = 180;

Servo HorizontalServo;
Servo VerticalServo;
Servo RightServo;
Servo LeftServo;

int HorizontalPotValue;
int HorizontalServoPosition;

int VerticalPotValue;
int VerticalServoPosition;

int RightPotValue;
int RightServoPosition;

int LeftPotValue;
int LeftServoPosition;

void setup() {
  Serial.begin(9600);
  Serial.print("Ready..");
  HorizontalServo.attach(ServoHorizontalPin);
  VerticalServo.attach(ServoVerticalPin);
  RightServo.attach(ServoRightPin);
  LeftServo.attach(ServoLeftPin);
}

void loop() {
  HorizontalPotValue = analogRead(HorizontalPotPin);
  Serial.print("HorizontalPotValue = ");
  Serial.println(HorizontalPotValue);
  VerticalPotValue = analogRead(VerticalPotPin);
  Serial.println("VerticalPotValue = ");
  Serial.print(VerticalPotValue);
  RightPotValue = analogRead(RightPotPin);
  Serial.println("RightPotValue = ");
  Serial.print(RightPotValue);
  LeftPotValue = analogRead(LeftPotPin);
  Serial.println("LeftPotValue = ");
  Serial.print(LeftPotValue);

  HorizontalServoPosition = map(HorizontalPotValue, 0, 1023, ServoH_Min, ServoH_Max);
  Serial.println("HorizontalServoPosition =");
  Serial.print(HorizontalServoPosition);

  VerticalServoPosition = map(VerticalPotValue, 0, 1023, ServoH_Min, ServoH_Max);
  Serial.println("VerticalServoPosition = ");
  Serial.print(VerticalServoPosition);

  RightServoPosition = map(RightPotValue, 0, 1023, ServoH_Min, ServoH_Max);
  Serial.println("RightServoPosition = ");
  Serial.print(RightServoPosition);

  LeftServoPosition = map(LeftPotValue, 0, 1023, ServoH_Min, ServoH_Max);
  Serial.println("LeftServoPosition = ");
  Serial.print(LeftServoPosition);

  HorizontalServo.write(HorizontalServoPosition);
  VerticalServo.write(VerticalServoPosition);
  RightServo.write(RightServoPosition);
  LeftServo.write(LeftServoPosition);

  delay(20);
}

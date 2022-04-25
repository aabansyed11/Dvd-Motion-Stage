#include <Stepper.h>

// pins 12, 11, 9, 8 refer to stepper motor
Stepper step1(200, 12, 11, 9, 8);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  // pins 3, 5 refer to brushed DC motor
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  step1.setSpeed(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // spinning the stage
  digitalWrite(5, LOW);
  analogWrite(3, 145);

  // controlling the stepper motor
  step1.step(2000);
  delay(500);

  step1.step(-2000);
  delay(500);
}

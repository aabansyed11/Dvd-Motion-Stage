//Written with the help of Imaad Syed and Dr. Lafe Spietz

#include <Stepper.h>

int delayus = 150;
int dirPin3 = 8;
int stepPin3 = 9;
int enPin3 = 10;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(3, OUTPUT);
    pinMode(5, OUTPUT);


    pinMode(dirPin3,OUTPUT);
    pinMode(stepPin3,OUTPUT);
    pinMode(enPin3,OUTPUT);


    digitalWrite(dirPin3,LOW);
    digitalWrite(stepPin3,LOW);
    digitalWrite(enPin3,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(5, LOW);
  analogWrite(3, 175);
  //delay(100);

  moveUp(400);
  delay(400);
  moveDown(400);
  delay(400);

}

void moveDown(int nSteps){
      digitalWrite(dirPin3,LOW);
     digitalWrite(enPin3,LOW);
     
     for(int index = 0;index < nSteps;index++){
       digitalWrite(stepPin3,HIGH);
       delayMicroseconds(delayus); 
       digitalWrite(stepPin3,LOW);
       delayMicroseconds(delayus); 
     }          
     digitalWrite(enPin3,HIGH);   
}

void moveUp(int nSteps){
     digitalWrite(dirPin3,HIGH);
     digitalWrite(enPin3,LOW);
     
     for(int index = 0;index < nSteps;index++){
       digitalWrite(stepPin3,HIGH);
       delayMicroseconds(delayus); 
       digitalWrite(stepPin3,LOW);
       delayMicroseconds(delayus); 
     }          
     digitalWrite(enPin3,HIGH);    
}

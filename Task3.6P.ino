#include <Servo.h>

Servo myServo;  

int servoPin = 13;   
int angle = 0;      

void setup() {
  myServo.attach(servoPin);  
}

void loop() {

  myServo.write(90);
  delay(1000);
  myServo.write(180);
  delay(1000);
  myServo.write(45);
  delay(1000);
  myServo.write(0);
  delay(1000);

  // Sweep the servo from 0 to 180 degrees
  for (angle = 0; angle <= 180; angle += 1) {
    myServo.write(angle);   
    delay(15);              
  }

  // Sweep the servo from 180 to 0 degrees
  for (angle = 180; angle >= 0; angle -= 1) {
    myServo.write(angle);   
    delay(15);              
  }
  delay(1000);
}


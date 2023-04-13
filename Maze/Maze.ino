#include <Servo.h>
  
Servo servo1;
Servo servo2;
int joyX = 0;
int joyY = 1;
  
int servoVal;
  
void setup() 
{
  servo1.attach(8);
  servo2.attach(9);
  Serial.begin(9600);
}
  
void loop()
{
  
  servoVal = analogRead(joyX);
  //Serial.println(servoVal);
  servoVal = map(servoVal, 200, 800, 0, 50);
  servo1.write(servoVal);
  
  servoVal = analogRead(joyY);
  servoVal = map(servoVal, 200, 800, 0 , 50);
  Serial.println(servoVal);
  servo2.write(servoVal);
}

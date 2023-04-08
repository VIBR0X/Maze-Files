#include <Servo.h>
  
Servo servo1;
Servo servo2;
int joyX = 0;
int joyY = 1;
  
int servoVal;
  
void setup() 
{
  servo1.attach(4);
  servo2.attach(3);
}
  
void loop()
{
  
  servoVal = analogRead(joyX);
  servoVal = map(servoVal, 0, 1023, 0, 20);
  servo1.write(servoVal);

  servoVal = analogRead(joyY);
  servoVal = map(servoVal,0, 1023, 0 , 20);
  servo2.write(servoVal);
}

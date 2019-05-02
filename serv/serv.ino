
#include <Servo.h>

Servo servo1;  // create servo object to control a servo
Servo servo2;
// twelve servo objects can be created on most boards

int pos1 = 0;    
int pos2=0;// variable to store the servo position

void setup() {
  servo1.attach(9);
  servo2.attach(7);
  
  // attaches the servo on pin 9 to the servo object
}

void loop() {
  mov1();
 
}

void mov1()
{
  for (pos1 = 0; pos1 <= 180; pos1 += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo1.write(pos1);
    servo2.write(pos1);// tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos1 = 180; pos1 >= 0; pos1 -= 1) { // goes from 180 degrees to 0 degrees
    servo1.write(pos1);
    servo2.write(pos1);// tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
}


void mov2()
{
  for (pos2 = 0; pos2 <= 180; pos2 += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo2.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos2 = 180; pos2 >= 0; pos2 -= 1) { // goes from 180 degrees to 0 degrees
    servo2.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
}

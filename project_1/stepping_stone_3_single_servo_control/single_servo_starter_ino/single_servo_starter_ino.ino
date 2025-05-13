#include <Servo.h>

int inByte;
int myint;

Servo myservo1;  // create servo object to control a servo
//Servo myservo2;  // create servo object to control a servo
// twelve servo objects can be created on most boards

void setup()
{
  Serial.begin(115200);

  Serial.print("single servo control over serial SS19");
  Serial.print("\n");

  myservo1.attach(6, 900, 2100);  // attaches to servo on pin 6
}


void loop()
{
  if (Serial.available() > 0) {
    //your code here
    // get myint from serial as two byte integer, possibly within a case
    // once you have the int reassembled, send it to the servo:
    myservo1.writeMicroseconds(myint);
  }
}

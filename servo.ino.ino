#include <Servo.h>
Servo servo1;
int pos = 00;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(6);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (pos = 00; pos<180; pos += 1){
    servo1.write (pos);
    delay (10);
  }
  for (pos = 180; pos>=1; pos -= 1){
    servo1.write (pos);
    delay (10);
  }
}

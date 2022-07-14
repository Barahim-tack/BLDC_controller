#include <Servo.h> 

Servo BLDC; 
int POT; 

void setup() {
 BLDC.attach(9,1000,2000);
}

void loop() {
  POT = analogRead(A0);
  POT = map(POT,0,1023,0,180); //in case of bidirectional ESC, after 90-degrees the rotation will be reversed
  BLDC.write(POT);
}

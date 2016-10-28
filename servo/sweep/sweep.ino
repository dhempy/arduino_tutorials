#include <Servo.h>

int servo_pin = 9;
int step_angle = 15;
int step_delay = 500;

Servo pointer; 

int angle = 0;    

void setup() {

  Serial.begin(9600);
  pointer.attach(servo_pin);  
}

void loop() {
  for (angle = 0; angle <= 180; angle += step_angle) { 
    pointer.write(angle);    
    Serial.println(angle);          
    delay(step_delay);                       
  }
//  for (angle = 180; angle >= 0; angle -= step_angle) { 
//    pointer.write(angle);              
//    delay(step_delay);                       
//  }
}

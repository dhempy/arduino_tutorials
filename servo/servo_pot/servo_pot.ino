#include <Servo.h>

const int servo_pin = 9;
const int pot_pin = A0;

int step_delay = 350;

Servo pointer; 

int angle;    
int input_val;

void setup() {
  Serial.begin(9600);
  Serial.println("setup...");

  pointer.attach(servo_pin);  
}

void loop() {
//  Serial.print("LOOP -- ");
  input_val = analogRead(pot_pin);           // reads the value of the potentiometer (value between 0 and 1023)
  angle = map(input_val, 0, 1023, 180, 0);     // scale it to use it with the servo (value between 0 and 180)
  pointer.write(angle);                  // sets the servo position according to the scaled value
  Serial.print("pot: ");
  Serial.print(input_val);
  Serial.print(" angle: ");
  Serial.print(angle);
  Serial.println();
  
  delay(step_delay);                           // waits for the servo to get there
}

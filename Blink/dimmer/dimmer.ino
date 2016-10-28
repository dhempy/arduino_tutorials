
int maxBright = 255;
int stepBright = 1;
int ledPin = 9;  // Pin 13 doesn't support pwm on Uno.

int tinyDelay = 2;
int shortDelay = 200;
int longDelay = 1000;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void on() {
  digitalWrite(ledPin, HIGH);
}

void off() {
  digitalWrite(ledPin, LOW);
}

void loop() {
  for(int bright = 0; bright < maxBright; bright += stepBright) {
    analogWrite(ledPin, bright);
    delay(tinyDelay);
  }

  for(int bright = maxBright; bright >= 0; bright -= stepBright) {
    analogWrite(ledPin, bright);
    delay(tinyDelay);
  }

  off();
  delay(longDelay);
}

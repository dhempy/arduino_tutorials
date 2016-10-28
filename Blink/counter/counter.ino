
int minDelay = 250;
int maxDelay = 1000;
int maxBlinks = 9;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

void shortDelay() {
  delay(200);
}

void longDelay() {
  delay(1000);
}

void on() {
  digitalWrite(13, HIGH); 
}

void off() {
  digitalWrite(13, LOW); 
}

// the loop function runs over and over again forever
void loop() {
  int blinks = random(maxBlinks);

  for (int i=0; i < blinks; i++) {
    on();
    shortDelay();
    off();
    shortDelay();
  }

  longDelay();
}


int minDelay = 250;
int maxDelay = 1000;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

void randomPause() {
  delay(random(minDelay, maxDelay));
}

void on() {
  digitalWrite(13, HIGH); 
}

void off() {
  digitalWrite(13, LOW); 
}

// the loop function runs over and over again forever
void loop() {
  on();
  randomPause();
  off();
  randomPause();
}

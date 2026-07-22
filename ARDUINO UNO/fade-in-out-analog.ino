const int led = 9;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  // Fade in
  for (int i = 0; i <= 255; i++) {
    analogWrite(led, i);
    delay(10);
  }

  // Fade out
  for (int i = 255; i >= 0; i--) {
    analogWrite(led, i);
    delay(10);
  }
}

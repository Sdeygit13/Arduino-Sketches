/*
Ruby r more r Traffic Light🥱
This code is fully written by Suvam Dey

*/
const int red_led = 8;
const int orange_led = 9;
const int green_led = 10;

void setup() {
  pinMode(red_led, OUTPUT);
  pinMode(orange_led, OUTPUT);
  pinMode(green_led, OUTPUT);
}

void loop() {

  // Red Light
  digitalWrite(red_led, HIGH);
  delay(20000);
  digitalWrite(red_led, LOW);

  // Yellow Light (Ready to Go)
  digitalWrite(orange_led, HIGH);
  delay(3000);
  digitalWrite(orange_led, LOW);

  // Green Light
  digitalWrite(green_led, HIGH);
  delay(20000);
  digitalWrite(green_led, LOW);

  // Yellow Light (Prepare to Stop)
  digitalWrite(orange_led, HIGH);
  delay(3000);
  digitalWrite(orange_led, LOW);
}

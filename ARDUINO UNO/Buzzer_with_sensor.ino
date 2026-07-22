const int sensor = 10;
const int led = 8;
const int buzzer = 12;

void setup() {

  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {

  if (digitalRead(sensor) == LOW) {   // 'LOW' means object is very close to the sensor

    digitalWrite(led, HIGH);         // LED will be ON state
    digitalWrite(buzzer, HIGH);     // Buzzer will be ON state

  }
  else {

    digitalWrite(led, LOW);         // LED will be OFF state
    digitalWrite(buzzer, LOW);      // Buzzer will be OFF state

  }

}

const int sensor = 10;
const int led = 8;

void setup() {

  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  if (digitalRead(sensor) == LOW) {     // 'LOW' means object is very close to the sensor
    digitalWrite(led, HIGH);            // LED will be ON state
  }
  else {
    digitalWrite(led, LOW);
  }
  
}

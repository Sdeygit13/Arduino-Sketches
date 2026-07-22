const int trigPin = 9;
const int echoPin = 10;
const int led = 8;
const int buzzer = 12;

long duration;
float distance;

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance <= 300) {

    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);

  }
  else {

    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);

  }

  delay(100);

}

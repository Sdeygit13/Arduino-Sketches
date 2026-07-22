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

  duration = pulseIn(echoPin, HIGH);     // pulseIn() measures how long the ECHO pin stays HIGH. That time is stored in microseconds (µs)

  distance = duration * 0.0343 / 2;     // Speed of sound ≈ 0.0343 cm per microsecond, the sound travels to the object and back, so we divide by 2

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance <= 600) {

    digitalWrite(led, HIGH);
    delay(200);

    digitalWrite(led, LOW);
    delay(30);

    digitalWrite(buzzer, HIGH);
    delay(100);

    digitalWrite(buzzer, LOW);
    delay(50);


  }
  else {

    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);

  }

  delay(100);

}

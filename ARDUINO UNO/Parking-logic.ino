const int trigPin = 9;
const int echoPin = 10;

const int redLED = 4;
const int yellowLED = 5;
const int greenLED = 6;
const int blueLED = 7;

const int buzzer = 12;

long duration;
float distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);

  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  // Trigger the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  // Read Echo Time
  duration = pulseInLong(echoPin, HIGH, 30000);

  // If no echo is received
  if (duration == 0)
  {
    distance = 999;
  }
  else
  {
    distance = duration * 0.0343 / 2;
  }
  
  // Display Distance
  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println(" cm");

  // Turn OFF all LEDs and buzzer
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(buzzer, LOW);

  // ---------- Distance Conditions ----------

  if (distance <= 10)
  {
    digitalWrite(redLED, HIGH);

    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);
  }

  else if (distance <= 20)
  {
    digitalWrite(yellowLED, HIGH);

    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(250);
  }

  else if (distance <= 30)
  {
    digitalWrite(greenLED, HIGH);

    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(500);
  }

  else if (distance <= 40)
  {
    digitalWrite(blueLED, HIGH);

    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(800);
  }

  else
  {
    // More than 40 cm
    // All LEDs and buzzer remain OFF
  }
}

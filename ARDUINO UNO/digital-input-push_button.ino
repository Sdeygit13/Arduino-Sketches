const int led = 13;
const int button = 2;

void setup() {

  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {

  if(digitalRead(button) == HIGH) {
    // LED is ON
    digitalWrite(led, HIGH); 
  }
  else {
    //LED is OFF
    digitalWrite(led, LOW);
  }

}

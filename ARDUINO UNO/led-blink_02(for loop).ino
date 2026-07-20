int led = 13;
int delayPeriod = 100;
void setup()
{
pinMode(led, OUTPUT);
}

void loop()
{
for (int i = 0; i < 20; i ++)
{
digitalWrite(led, HIGH);
delay(delayPeriod);
digitalWrite(led, LOW);
delay(delayPeriod);
}
delay(3000);
}

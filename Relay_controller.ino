/*********
  Rui Santos
  Complete project details at http://randomnerdtutorials.com
*********/
int relay = 8;
volatile byte relayState = LOW;
int photocellpin = A2;
const int trigPin = 13;
const int echoPin = 11;
bool var = false;

void setup() {
  // Pin for relay module set as output
  pinMode(relay, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  power(relay, var);
  while (motion(trigPin, echoPin))
  {
    if (dark(photocellpin))
    {
      power(relay, true);
      delay(10000);
      power(relay, false);
      var = false;
    }
  }
  motion(trigPin, echoPin);
  dark(photocellpin);
  power(relay, var);

}
bool motion(int x, int y)
{
  pinMode(x, OUTPUT);
  digitalWrite(x, LOW);
  delayMicroseconds(2);
  digitalWrite(x, HIGH);
  delayMicroseconds(5);
  digitalWrite(x, LOW);
  pinMode(y, INPUT);
  double duration = pulseIn(y, HIGH);
  double inches = duration / 74 / 2;
  Serial.print("distance: ");
  Serial.println(inches);
  if (inches < 120)
  {
    return true;
    Serial.println("Distance true");
  }
  else
  {
  Serial.println("Distance false");
  return false;
  }
}
bool dark(int bright)
{
  int range = 400;
  int photocellread = analogRead(bright);
  if (photocellread < range)
  {
    return true;
    Serial.println("light true");
    delay(100);
  }
  else
  {
    return false;
    Serial.println("light false");
    delay(100);
  }
}
void power(int pin, boolean onOff)
{
  if (onOff)
  {
    digitalWrite(pin, LOW);
    Serial.println("on");
  }
  else
  {
    digitalWrite(pin, HIGH);
    Serial.println("off");
  }
}

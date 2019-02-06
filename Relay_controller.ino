/*********
  Rui Santos
  Complete project details at http://randomnerdtutorials.com
*********/
int relay = 8;
volatile byte relayState = LOW;
int photocellpin = A2;
int photocellread;
int range = 400;
//const int trigPin = 13;
//const int echoPin = 11;

void setup() {
  // Pin for relay module set as output
  pinMode(relay, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);

  photocellread = analogRead(photocellpin);
  Serial.print("Value: ");
  Serial.println(photocellread);
  if (photocellread < range) {
    digitalWrite(relay, LOW);
    Serial.println("on");
  } else {
    digitalWrite(relay, HIGH);
    Serial.println("off");
    delay(100);
  }
}

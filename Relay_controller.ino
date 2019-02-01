/*********
  Rui Santos
  Complete project details at http://randomnerdtutorials.com
*********/
int relay = 8;
int buttonPin = 2;
int buttonState = 1;
volatile byte relayState = LOW;



void setup() {
  // Pin for relay module set as output
  pinMode(relay, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    digitalWrite(relay, LOW);
    Serial.println("on");
  } else {
    digitalWrite(relay, HIGH);
    Serial.println("off");
    delay(100);
  }
  }

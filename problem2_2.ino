//2. Create an Arduino program that checks if a temperature is above a certain threshold and turns on an LED if true.
const int temperatureThreshold = 25; // Replace this with your desired threshold
const int ledPin = 13; // Replace this with the appropriate LED pin number

void setup() {
  pinMode(ledPin, OUTPUT);
  int temperature = 30; // Replace this with your temperature reading
  if (temperature > temperatureThreshold) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
//7. Write an Arduino sketch to toggle an LED on and off five times using a for loop.
const int ledPin = 13; // Replace this with the pin number connected to the LED

void setup() {
  pinMode(ledPin, OUTPUT);
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, HIGH);
    delay(1000); // Toggle the LED on for 1 second
    digitalWrite(ledPin, LOW);
    delay(1000); // Toggle the LED off for 1 second
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
//6. Create an Arduino sketch to toggle an LED on and off using a boolean variable and the logical NOT (!) operator.
const int ledPin = 13; // LED connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

void loop() {
  static bool ledState = false; // Initialize the LED state as off
  ledState = !ledState; // Toggle the LED state using the NOT operator
  digitalWrite(ledPin, ledState); // Set the LED state
  delay(1000); // Wait for 1 second
}
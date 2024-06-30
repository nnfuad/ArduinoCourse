//8. Develop an Arduino program that checks if a number is even or odd and blinks an LED accordingly.
const int numberPin = 2; // Replace this with the pin number to read the number from
const int ledPin = 13;   // Replace this with the pin number connected to the LED

void setup() {
  pinMode(numberPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int number = digitalRead(numberPin);
  if (number % 2 == 0) {
    digitalWrite(ledPin, HIGH); // Turn on the LED for even numbers
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the LED for odd numbers
  }
  delay(500); // Adjust the delay as needed for blinking speed
}
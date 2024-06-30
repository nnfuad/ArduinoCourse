//10.Create an Arduino sketch that checks if a number is divisible by both 3 and 5 using the modulo operator.
void setup() {
  Serial.begin(9600); // Initialize the serial communication
  int number = 15;
  if (number % 3 == 0 && number % 5 == 0) {
    Serial.println("The number is divisible by both 3 and 5.");
  } else {
    Serial.println("The number is not divisible by both 3 and 5.");
  }
}

void loop() {
  // Empty loop
}
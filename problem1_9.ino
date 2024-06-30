//9. Implement an Arduino program that checks if a number is positive, negative, or zero and prints the result.
void setup() {
  Serial.begin(9600); // Initialize the serial communication
  int number = -7;
  if (number > 0) {
    Serial.println("The number is positive.");
  } else if (number < 0) {
    Serial.println("The number is negative.");
  } else {
    Serial.println("The number is zero.");
  }
}

void loop() {
  // Empty loop
}
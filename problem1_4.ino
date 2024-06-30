//4. Develop an Arduino sketch that checks if a number is even or odd and prints the result.
void setup() {
  Serial.begin(9600); // Initialize the serial communication
  int number = 7;
  if (number % 2 == 0) {
    Serial.println("The number is even.");
  } else {
    Serial.println("The number is odd.");
  }
}

void loop() {
  // Empty loop
}
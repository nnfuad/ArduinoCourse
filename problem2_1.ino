//1. Write an Arduino sketch that checks if a given number is positive and prints "Positive" if true and "Negative" otherwise.
void setup() {
  Serial.begin(9600);
  int number = 10; // Replace this with your desired number
  if (number > 0) {
    Serial.println("Positive");
  } else {
    Serial.println("Negative");
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
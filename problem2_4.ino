//4. Develop an Arduino program that checks if a number is divisible by both 2 and 3 and prints a corresponding message.

void setup() {
  Serial.begin(9600);
  int number = 12; // Replace this with the number you want to check
  if (number % 2 == 0 && number % 3 == 0) {
    Serial.println("Divisible by 2 and 3");
  } else {
    Serial.println("Not divisible by 2 and 3");
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
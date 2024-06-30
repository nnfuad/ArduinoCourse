//8. Develop an Arduino program that checks if a number is divisible by both 3 and 5 using a function.
void setup() {
  Serial.begin(9600);
  int number = 15; // Replace this with the number you want to check

  if (isDivisibleBy3And5(number)) {
    Serial.println("It is divisible by both 3 and 5.");
  } else {
    Serial.println("It is not divisible by both 3 and 5.");
  }
}

bool isDivisibleBy3And5(int n) {
  return (n % 3 == 0 && n % 5 == 0);
}

void loop() {
  // Nothing to do in the loop for this example
}
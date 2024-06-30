//5. Implement an Arduino sketch that calculates the factorial of a given number using a for loop.
void setup() {
  Serial.begin(9600);
  int number = 5; // Replace this with the number for which you want to calculate the factorial

  int factorial = 1;
  for (int i = 1; i <= number; i++) {
    factorial *= i;
  }
  Serial.print("Factorial of ");
  Serial.print(number);
  Serial.print(" is ");
  Serial.println(factorial);
}

void loop() {
  // Nothing to do in the loop for this example
}
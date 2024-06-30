//6. Create an Arduino program that generates a series of Fibonacci numbers using a for loop.
void setup() {
  Serial.begin(9600);
  int n = 10; // Replace this with the number of Fibonacci numbers you want to generate

  int fib1 = 0, fib2 = 1, fib3;
  Serial.println("Fibonacci Series:");
  Serial.print(fib1);
  Serial.print(", ");
  Serial.print(fib2);

  for (int i = 2; i < n; i++) {
    fib3 = fib1 + fib2;
    Serial.print(", ");
    Serial.print(fib3);
    fib1 = fib2;
    fib2 = fib3;
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
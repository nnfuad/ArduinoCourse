//2. Create an Arduino program that calculates the sum of the first 100 natural numbers using a for loop.
void setup() {
  Serial.begin(9600);
  int sum = 0;
  for (int i = 1; i <= 100; i++) {
    sum += i;
  }
  Serial.print("Sum of the first 100 natural numbers: ");
  Serial.println(sum);
}

void loop() {
  // Nothing to do in the loop for this example
}
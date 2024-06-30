//5. Implement an Arduino sketch that calculates the sum of two numbers using a function.
void setup() {
  Serial.begin(9600);
  int num1 = 10; // Replace this with the first number
  int num2 = 5;  // Replace this with the second number

  int sum = calculateSum(num1, num2);
  Serial.print("Sum of ");
  Serial.print(num1);
  Serial.print(" and ");
  Serial.print(num2);
  Serial.print(" is ");
  Serial.println(sum);
}

int calculateSum(int a, int b) {
  return a + b;
}

void loop() {
  // Nothing to do in the loop for this example
}
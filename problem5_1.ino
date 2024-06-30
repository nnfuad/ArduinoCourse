//1. Write an Arduino sketch that calculates the factorial of a given number using a function.
void setup() {
  Serial.begin(9600);
  int number = 5; // Replace this with the number for which you want to calculate the factorial

  int result = factorial(number);
  Serial.print("Factorial of ");
  Serial.print(number);
  Serial.print(" is ");
  Serial.println(result);
}

int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

void loop() {
  // 
}
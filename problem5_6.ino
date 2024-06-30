//6. Create an Arduino program that finds the maximum of three numbers using a function.
void setup() {
  Serial.begin(9600);
  int num1 = 10; // Replace this with the first number
  int num2 = 25; // Replace this with the second number
  int num3 = 15; // Replace this with the third number

  int maxNum = findMax(num1, num2, num3);
  Serial.print("The maximum number is: ");
  Serial.println(maxNum);
}

int findMax(int a, int b, int c) {
  int maxNum = a;
  if (b > maxNum) {
    maxNum = b;
  }
  if (c > maxNum) {
    maxNum = c;
  }
  return maxNum;
}

void loop() {
  // Nothing to do in the loop for this example
}
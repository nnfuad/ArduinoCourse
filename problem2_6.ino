//6. Create an Arduino program that calculates the maximum of three given numbers using if-else statements.
void setup() {
  Serial.begin(9600);
  int num1 = 10;
  int num2 = 15;
  int num3 = 5;
  int max = num1;

  if (num2 > max) {
    max = num2;
  }
  if (num3 > max) {
    max = num3;
  }

  Serial.print("Maximum number is: ");
  Serial.println(max);
}

void loop() {
  // Nothing to do in the loop for this example
}
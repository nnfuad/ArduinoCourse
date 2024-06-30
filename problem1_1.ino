//1. Write an Arduino sketch to add two numbers and print the result.
void setup() {
  Serial.begin(9600); // Initialize the serial communication
  int num1 = 5;
  int num2 = 10;
  int sum = num1 + num2;
  Serial.print("The sum of ");
  Serial.print(num1);
  Serial.print(" and ");
  Serial.print(num2);
  Serial.print(" is ");
  Serial.println(sum);
}

void loop() {
  // Empty loop
}
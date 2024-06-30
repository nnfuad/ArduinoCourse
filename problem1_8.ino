//8. Develop an Arduino sketch to calculate the remainder when one number is divided by another.
void setup() {
  Serial.begin(9600); // Initialize the serial communication
  int dividend = 17;
  int divisor = 5;
  int remainder = dividend % divisor; // Calculate the remainder
  Serial.print("The remainder of ");
  Serial.print(dividend);
  Serial.print(" divided by ");
  Serial.print(divisor);
  Serial.print(" is ");
  Serial.println(remainder);
}

void loop() {
  // Empty loop
}
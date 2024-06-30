//7. Write an Arduino program to calculate the square of a given number.
void setup() {
  Serial.begin(9600); // Initialize the serial communication
  int number = 5;
  int square = number * number; // Calculate the square of the number
  Serial.print("The square of ");
  Serial.print(number);
  Serial.print(" is ");
  Serial.println(square);
}

void loop() {
  // Empty loop
}
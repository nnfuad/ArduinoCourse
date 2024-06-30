//3. Write an Arduino program to swap the values of two variables without using a third variable.
void setup() {
  Serial.begin(9600); // Initialize the serial communication
  int a = 5;
  int b = 10;

  // Swapping without using a third variable
  a = a + b;
  b = a - b;
  a = a - b;

  Serial.print("After swapping, a = ");
  Serial.print(a);
  Serial.print(", b = ");
  Serial.println(b);
}

void loop() {
  // Empty loop
}
//3. Write an Arduino sketch to print the multiplication table of a given number using a for loop.
void setup() {
  Serial.begin(9600);
  int number = 5; // Replace this with the number for the multiplication table

  for (int i = 1; i <= 10; i++) {
    Serial.print(number);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(number * i);
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
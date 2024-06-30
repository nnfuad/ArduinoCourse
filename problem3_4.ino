//4. Develop an Arduino program that counts the number of even numbers between 1 and 100 using a for loop.
void setup() {
  Serial.begin(9600);
  int count = 0;
  for (int i = 1; i <= 100; i++) {
    if (i % 2 == 0) {
      count++;
    }
  }
  Serial.print("Number of even numbers between 1 and 100: ");
  Serial.println(count);
}

void loop() {
  // Nothing to do in the loop for this example
}
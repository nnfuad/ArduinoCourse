//1. Write an Arduino sketch to print the numbers from 1 to 10 using a for loop.
void setup() {
  Serial.begin(9600);
  for (int i = 1; i <= 10; i++) {
    Serial.println(i);
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
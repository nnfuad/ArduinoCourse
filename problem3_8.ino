//8. Develop an Arduino program that prints a countdown from 10 to 1 using a for loop.
void setup() {
  Serial.begin(9600);
  for (int i = 10; i >= 1; i--) {
    Serial.println(i);
    delay(1000); // 1-second delay between each countdown number
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
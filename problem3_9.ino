//9. Implement an Arduino sketch that calculates the average of a set of values entered through the serial monitor using a for loop.
void setup() {
  Serial.begin(9600);
  int numValues = 5; // Replace this with the number of values you want to average
  int sum = 0;
  int value;

  for (int i = 0; i < numValues; i++) {
    Serial.println("Enter a value:");
    while (!Serial.available()); // Wait until data is available
    value = Serial.parseInt(); // Read the entered value as an integer
    sum += value;
  }

  float average = static_cast<float>(sum) / numValues;
  Serial.print("Average of the entered values: ");
  Serial.println(average);
}

void loop() {
  // Nothing to do in the loop for this example
}
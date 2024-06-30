//9. Implement an Arduino sketch that calculates the average of a set of values using a function.
void setup() {
  Serial.begin(9600);
  int values[] = {10, 20, 30, 40, 50}; // Sample array of values
  int size = sizeof(values) / sizeof(values[0]); // Calculate the size of the array

  float averageValue = calculateAverage(values, size);
  Serial.print("Average of the values: ");
  Serial.println(averageValue);
}

float calculateAverage(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return static_cast<float>(sum) / size;
}

void loop() {
  // Nothing to do in the loop for this example
}
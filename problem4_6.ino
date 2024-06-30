//6. Create an Arduino program that sorts an array of integers in ascending order.
void setup() {
  Serial.begin(9600);
  
  int numbers[] = {5, 12, 8, 3, 19, 7}; // Sample array of integers
  int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array
  
  // Sort the array in ascending order using the bubble sort algorithm
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (numbers[j] > numbers[j + 1]) {
        // Swap elements if they are in the wrong order
        int temp = numbers[j];
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = temp;
      }
    }
  }
  
  // Print the sorted array
  Serial.println("The sorted array in ascending order:");
  for (int i = 0; i < size; i++) {
    Serial.print(numbers[i]);
    Serial.print(" ");
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
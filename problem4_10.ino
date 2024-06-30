//10.Create an Arduino program that removes duplicates from an array of integers.
void setup() {
  Serial.begin(9600);
  
  int numbers[] = {5, 12, 8, 5, 3, 19, 7, 8, 12}; // Sample array of integers
  int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array
  
  // Remove duplicates from the array
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (numbers[i] == numbers[j]) {
        // Shift elements to remove duplicates
        for (int k = j; k < size - 1; k++) {
          numbers[k] = numbers[k + 1];
        }
        size--; // Reduce the size of the array
        j--; // Decrement j to check the current position again
      }
    }
  }
  
  // Print the array without duplicates
  Serial.println("The array without duplicates:");
  for (int i = 0; i < size; i++) {
    Serial.print(numbers[i]);
    Serial.print(" ");
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
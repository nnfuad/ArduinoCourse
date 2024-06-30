//7. Write an Arduino sketch to find the index of a specific element in an array.
void setup() {
  Serial.begin(9600);
  
  int numbers[] = {5, 12, 8, 3, 19, 7}; // Sample array of integers
  int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array
  
  int targetNumber = 8; // Number to find the index of
  
  // Find the index of the target number in the array
  int index = -1; // Initialize index as -1 (not found)
  for (int i = 0; i < size; i++) {
    if (numbers[i] == targetNumber) {
      index = i;
      break;
    }
  }
  
  if (index != -1) {
    Serial.print("The index of ");
    Serial.print(targetNumber);
    Serial.print(" in the array is: ");
    Serial.println(index);
  } else {
    Serial.println("The number does not exist in the array.");
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
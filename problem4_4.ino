//4. Develop an Arduino program that checks if a given number exists in an array.
void setup() {
  Serial.begin(9600);
  
  int numbers[] = {5, 12, 8, 3, 19, 7}; // Sample array of integers
  int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array
  
  int targetNumber = 8; // Number to check
  
  // Check if the number exists in the array
  bool exists = false;
  for (int i = 0; i < size; i++) {
    if (numbers[i] == targetNumber) {
      exists = true;
      break;
    }
  }
  
  if (exists) {
    Serial.println("The number exists in the array.");
  } else {
    Serial.println("The number does not exist in the array.");
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
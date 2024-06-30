//8. Develop an Arduino program that counts the number of occurrences of a given element in an array.
void setup() {
  Serial.begin(9600);
  
  int numbers[] = {5, 12, 8, 3, 19, 7, 8}; // Sample array of integers
  int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array
  
  int targetNumber = 8; // Number to count occurrences
  
  // Count the number of occurrences of the target number in the array
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (numbers[i] == targetNumber) {
      count++;
    }
  }
  
  Serial.print("The number of occurrences of ");
  Serial.print(targetNumber);
  Serial.print(" in the array is: ");
  Serial.println(count);
}

void loop() {
  // Nothing to do in the loop for this example
}
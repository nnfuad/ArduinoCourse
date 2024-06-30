//2. Create an Arduino program that finds the largest number in an array of integers.
void setup() {
  Serial.begin(9600);
  
  int numbers[] = {5, 12, 8, 3, 19, 7}; // Sample array of integers
  int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array
  
  int largestNumber = numbers[0]; // Initialize the largest number as the first element
  
  // Find the largest number
  for (int i = 1; i < size; i++) {
    if (numbers[i] > largestNumber) {
      largestNumber = numbers[i];
    }
  }
  
  Serial.print("The largest number in the array is: ");
  Serial.println(largestNumber);
}

void loop() {
  // Nothing to do in the loop for this example
}
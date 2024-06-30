//5. Implement an Arduino sketch that finds the sum of all the elements in an array.
void setup() {
  Serial.begin(9600);
  
  int numbers[] = {5, 12, 8, 3, 19, 7}; // Sample array of integers
  int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array
  
  int sum = 0;
  
  // Calculate the sum of all elements
  for (int i = 0; i < size; i++) {
    sum += numbers[i];
  }
  
  Serial.print("The sum of all elements in the array is: ");
  Serial.println(sum);
}

void loop() {
  // Nothing to do in the loop for this example
}
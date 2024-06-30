//9. Implement an Arduino sketch that reverses the order of elements in an array.
void setup() {
  Serial.begin(9600);
  
  int numbers[] = {5, 12, 8, 3, 19, 7}; // Sample array of integers
  int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array
  
  // Reverse the order of elements in the array
  int start = 0;
  int end = size - 1;
  while (start < end) {
    int temp = numbers[start];
    numbers[start] = numbers[end];
    numbers[end] = temp;
    start++;
    end--;
  }
  
  // Print the reversed array
  Serial.println("The reversed array:");
  for (int i = 0; i < size; i++) {
    Serial.print(numbers[i]);
    Serial.print(" ");
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
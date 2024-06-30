//3. Write an Arduino sketch to calculate the average of a set of values stored in an array.
void setup() {
  Serial.begin(9600);
  
  int values[] = {10, 20, 30, 40, 50}; // Sample array of values
  int size = sizeof(values) / sizeof(values[0]); // Calculate the size of the array
  
  int sum = 0;
  
  // Calculate the sum of values
  for (int i = 0; i < size; i++) {
    sum += values[i];
  }
  
  float average = static_cast<float>(sum) / size;
  
  Serial.print("The average of the values is: ");
  Serial.println(average);
}

void loop() {
  // Nothing to do in the loop for this example
}
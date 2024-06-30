//1. Write an Arduino sketch to store and print the temperatures of a week (7 days) using an array.
void setup() {
  Serial.begin(9600);
  
  int temperatures[7]; // Array to store temperatures for 7 days
  
  // Assign temperatures for each day
  temperatures[0] = 25;
  temperatures[1] = 26;
  temperatures[2] = 24;
  temperatures[3] = 28;
  temperatures[4] = 22;
  temperatures[5] = 27;
  temperatures[6] = 23;
  
  // Print temperatures for each day
  for (int i = 0; i < 7; i++) {
    Serial.print("Temperature for Day ");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.print(temperatures[i]);
    Serial.println(" °C");
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
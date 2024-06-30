//2. Create an Arduino sketch that calculates the area of a rectangle using the
void setup() {
  Serial.begin(9600); // Initialize the serial communication
  float length, width, area;
  Serial.println("Enter the length of the rectangle:");
  while (!Serial.available()) { // Wait for user input
  }
  length = Serial.parseFloat(); // Read the user input as a float
  Serial.println("Enter the width of the rectangle:");
  while (!Serial.available()) { // Wait for user input
  }
  width = Serial.parseFloat(); // Read the user input as a float
  area = length * width; // Calculate the area
  Serial.print("The area of the rectangle is: ");
  Serial.println(area);
}

void loop() {
  // Empty loop
}
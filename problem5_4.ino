//4. Develop an Arduino program that calculates the area of a rectangle using a function with parameters.
void setup() {
  Serial.begin(9600);
  int length = 5; // Replace this with the length of the rectangle
  int width = 3;  // Replace this with the width of the rectangle

  int area = calculateArea(length, width);
  Serial.print("Area of the rectangle: ");
  Serial.println(area);
}

int calculateArea(int length, int width) {
  return length * width;
}

void loop() {
  // Nothing to do in the loop for this example
}
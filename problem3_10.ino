//10.Create an Arduino program that prints a pattern of stars in the shape of a pyramid using a for loop.
void setup() {
  Serial.begin(9600);
  int pyramidHeight = 5; // Replace this with the desired height of the pyramid

  for (int i = 1; i <= pyramidHeight; i++) {
    // Print spaces to center-align the stars
    for (int j = 1; j <= pyramidHeight - i; j++) {
      Serial.print(" ");
    }

    // Print stars for each row
    for (int j = 1; j <= 2 * i - 1; j++) {
      Serial.print("*");
    }

    Serial.println(); // Move to the next row
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
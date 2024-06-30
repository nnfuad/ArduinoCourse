//7. Write an Arduino sketch to determine the grade of a student based on their percentage score.
void setup() {
  Serial.begin(9600);
  float percentage = 78.5; // Replace this with the student's percentage score

  if (percentage >= 90) {
    Serial.println("Grade: A");
  } else if (percentage >= 80) {
    Serial.println("Grade: B");
  } else if (percentage >= 70) {
    Serial.println("Grade: C");
  } else if (percentage >= 60) {
    Serial.println("Grade: D");
  } else {
    Serial.println("Grade: F");
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
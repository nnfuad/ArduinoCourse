//10.Create an Arduino program that converts a given numerical grade into a letter grade using if-else statements.
void setup() {
  Serial.begin(9600);
  int numericalGrade = 85; // Replace this with the numerical grade

  if (numericalGrade >= 90) {
    Serial.println("Letter Grade: A");
  } else if (numericalGrade >= 80) {
    Serial.println("Letter Grade: B");
  } else if (numericalGrade >= 70) {
    Serial.println("Letter Grade: C");
  } else if (numericalGrade >= 60) {
    Serial.println("Letter Grade: D");
  } else {
    Serial.println("Letter Grade: F");
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
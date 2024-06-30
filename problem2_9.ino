//9. Implement an Arduino sketch that checks if a person is eligible to vote based on their age.
void setup() {
  Serial.begin(9600);
  int age = 18; // Replace this with the person's age

  if (age >= 18) {
    Serial.println("Eligible to Vote");
  } else {
    Serial.println("Not Eligible to Vote");
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
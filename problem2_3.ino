//3. Write an Arduino sketch to determine if a year is a leap year or not.
void setup() {
  Serial.begin(9600);
  int year = 2024; // Replace this with the year you want to check
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    Serial.println("Leap Year");
  } else {
    Serial.println("Not a Leap Year");
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
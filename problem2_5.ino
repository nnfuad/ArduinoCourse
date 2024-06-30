//5. Implement an Arduino sketch that determines whether a character entered from the serial monitor is a vowel or a consonant.
void setup() {
  Serial.begin(9600);
  char character = 'a'; // Replace this with the character you want to check
  if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
      character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
    Serial.println("Vowel");
  } else {
    Serial.println("Consonant");
  }
}

void loop() {
  // Nothing to do in the loop for this example
}
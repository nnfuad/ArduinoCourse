//7. Write an Arduino sketch to check if a given string is a palindrome using a function.
void setup() {
  Serial.begin(9600);
  String str = "radar"; // Replace this with the string you want to check for palindrome

  if (isPalindrome(str)) {
    Serial.println("It is a palindrome.");
  } else {
    Serial.println("It is not a palindrome.");
  }
}

bool isPalindrome(String str) {
  int length = str.length();
  for (int i = 0; i < length / 2; i++) {
    if (str[i] != str[length - 1 - i]) {
      return false;
    }
  }
  return true;
}

void loop() {
  // Nothing to do in the loop for this example
}
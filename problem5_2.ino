//2. Create an Arduino program that checks if a number is prime or not using a function.
void setup() {
  Serial.begin(9600);
  int number = 17; // Replace this with the number you want to check for primality

  if (isPrime(number)) {
    Serial.println("It is a prime number.");
  } else {
    Serial.println("It is not a prime number.");
  }
}

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

void loop() {
  // Nothing to do in the loop for this example
}
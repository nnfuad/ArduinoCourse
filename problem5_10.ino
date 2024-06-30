//10.Create an Arduino program that generates a random number within a given range using a function.
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0)); // Seed the random number generator

  int lowerBound = 10; // Replace this with the lower bound of the range
  int upperBound = 50; // Replace this with the upper bound of the range

  int randomNumber = generateRandomNumber(lowerBound, upperBound);
  Serial.print("Random number within the range [");
  Serial.print(lowerBound);
  Serial.print(", ");
  Serial.print(upperBound);
  Serial.print("]: ");
  Serial.println(randomNumber);
}

int generateRandomNumber(int lowerBound, int upperBound) {
  return random(lowerBound, upperBound + 1);
}

void loop() {
  // Nothing to do in the loop for this example
}
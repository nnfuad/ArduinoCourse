//5. Implement an Arduino program that converts a temperature in Celsius to Fahrenheit using the formula F = (C * 9/5) + 32.
void setup() {
  Serial.begin(9600); // Initialize the serial communication
  float celsius = 25;
  float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
  Serial.print(celsius);
  Serial.print(" degrees Celsius is equal to ");
  Serial.print(fahrenheit);
  Serial.println(" degrees Fahrenheit.");
}

void loop() {
  // Empty loop
}
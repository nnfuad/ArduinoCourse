//3. Write an Arduino sketch to convert a temperature from Celsius to Fahrenheit using a function.
void setup() {
  Serial.begin(9600);
  float celsius = 25.0; // Replace this with the Celsius temperature you want to convert

  float fahrenheit = celsiusToFahrenheit(celsius);
  Serial.print(celsius);
  Serial.print(" degrees Celsius is equal to ");
  Serial.print(fahrenheit);
  Serial.println(" degrees Fahrenheit.");
}

float celsiusToFahrenheit(float celsius) {
  return (celsius * 9.0 / 5.0) + 32.0;
}

void loop() {
  // Nothing to do in the loop for this example
}
// Test all analog pins on Arduino Uno R3

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read and print the analog value of each pin
  for (int pin = 0; pin <= 5; pin++) {
    int value = analogRead(pin);
    Serial.print("Analog Pin ");
    Serial.print(pin);
    Serial.print(": ");
    Serial.println(value);
    delay(1000);  // Wait for 1 second
  }
}

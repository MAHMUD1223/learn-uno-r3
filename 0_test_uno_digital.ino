// Test all digital pins on Arduino Uno R3

void setup() {
  // Set all digital pins as outputs
  for (int pin = 2; pin <= 13; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  // Blink each pin in sequence
  for (int pin = 2; pin <= 13; pin++) {
    digitalWrite(pin, HIGH);   // Turn the LED on
    delay(50);                // Wait for 0.5 seconds
    digitalWrite(pin, LOW);    // Turn the LED off
    delay(50);                // Wait for 0.5 seconds
  }
}
// connect lights in ports 2 to 13 and enjoy the show Anode goes with the ports and cathode to ground

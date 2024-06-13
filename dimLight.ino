// Pin number for the LED
const int ledPin = 7;

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH is the voltage level)
  int count = 5;

  for (size_t i = 0; i < count; i++){
    digitalWrite(ledPin, HIGH);
    // Wait for a second
    delay(100);
    // Turn the LED off by making the voltage LOW
    digitalWrite(ledPin, LOW);
    // Wait for a second
    delay(100);
  }

  delay(1000);
}
  

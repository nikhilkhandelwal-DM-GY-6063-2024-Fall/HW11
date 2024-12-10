const int ledPins[] = {2, 3, 4, 5, 6, 7};

void setup() {
  Serial.begin(9600); // Initialize Serial Communication
  for (int i = 0; i < 6; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], HIGH); // All LEDs ON initially
  }
}

void loop() {
  int seconds = (millis() / 1000) % 60;
  int activeLEDs = 6 - (seconds / 10); // Number of LEDs to keep ON

  for (int i = 0; i < 6; i++) {
    if (i < activeLEDs) {
      digitalWrite(ledPins[i], HIGH); // Keep LEDs ON
    } else {
      digitalWrite(ledPins[i], LOW); // Turn LEDs OFF
    }
  }

  // Print the current time to the Serial Monitor
  Serial.print("Elapsed Seconds: ");
  Serial.println(seconds);

  delay(500); // Update Serial Monitor every 500ms
}

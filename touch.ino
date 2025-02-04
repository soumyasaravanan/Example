const int touchPin = 2;  // Touch sensor connected to digital pin 2
const int ledPin = 13;   // LED connected to digital pin 13

void setup() {
  pinMode(touchPin, INPUT);   // Set the touch sensor pin as input
  pinMode(ledPin, OUTPUT);    // Set the LED pin as output
  Serial.begin(9600);         // Start the Serial communication
}

void loop() {
  int touchState = digitalRead(touchPin);  // Read the state of the touch sensor

  if (touchState == HIGH) {  // If the sensor is touched
    digitalWrite(ledPin, HIGH);  // Turn on the LED
    Serial.println("Touch is detected!");
  } else {
    digitalWrite(ledPin, LOW);   // Turn off the LED
    Serial.println("No touch detected.");
  }

  delay(1000);  // Small delay for debounce and to avoid flooding the Serial monitor
}

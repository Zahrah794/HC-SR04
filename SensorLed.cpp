int trigger = 12; // Pin connected to the trigger of the HC-SR04 sensor (KUNING TRIG)
int echo = 13; // Pin connected to the echo of the HC-SR04 sensor (PIN 13 ECHO)
int led = 8; // Pin connected to the LED

long duration = 0;
int cm = 0;
int inch = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Initialize the serial communication at a baud rate of 9600
  pinMode(trigger, OUTPUT); // Set trigger pin as an output
  pinMode(echo, INPUT); // Set echo pin as an input
  pinMode(led, OUTPUT); // Set LED pin as an output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigger, LOW); // Set trigger pin to low
  digitalWrite(trigger, HIGH); // Send a 10μs pulse to the trigger pin
  digitalWrite(trigger, LOW); // Set trigger pin to low again

  duration = pulseIn(echo, HIGH); // Measure the duration of the echo pulse
  cm = duration * 0.034 / 2; // Calculate distance in centimeters
  inch = duration * 0.0133 / 2; // Calculate distance in inches

  if (inch < 50) {
    digitalWrite(led, HIGH); // Turn on the LED if the distance is less than 50 inches
  } else {
    digitalWrite(led, LOW); // Turn off the LED if the distance is greater than or equal to 50 inches
  }

  if (inch < 100) {
    // Print the distance in inches and centimeters if the distance is less than 100 inches
    Serial.print("Inches: ");
    Serial.println(inch);
    Serial.print("Cm: ");
    Serial.println(cm);
  }
  delay(500); // Delay for 500 milliseconds
}

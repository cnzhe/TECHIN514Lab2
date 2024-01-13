#include <Arduino.h>

const int analogPin = D8; // Define the analog pin connected to the PCB output
float voltage;

void setup() {
  Serial.begin(115200); // Initialize serial communication
}

void loop() {
  int adcValue = analogRead(analogPin); // Read analog value from the specified pin
  voltage = (adcValue / 4095.0) * 3.3; // Convert ADC reading to voltage

  // Display the voltage reading on the serial monitor
  Serial.print("ADC Value: ");
  Serial.print(adcValue);
  Serial.print(", Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(1000); // Optional delay for readability
}

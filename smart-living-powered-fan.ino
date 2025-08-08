// Pin configuration
const int buttonPin = 2;      // Button connected to digital pin 2
const int motorPin = 9;       // Transistor base connected to digital pin 9 (with PWM)
const int piezoBuzzerPin = 13;        // Buzzer connected to digital pin 13
const int tempPin = A0;      // TMP36 sensor connected to analog pin A0

void setup()
{
  pinMode(buttonPin, INPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(piezoBuzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // Read temperature from TMP36
  int sensorValue = analogRead(tempPin);
  
  // Convert to voltage
  float voltage = sensorValue * (5.0 / 1023.0);
  
  // Convert voltage to temperature in C
  float temperatureC = (voltage - 0.5) * 100;

  // Convert C to F
  float temperatureF = (temperatureC * 9.0/5.0) + 32;

  Serial.print("Temperature (F): ");
  Serial.println(temperatureF);

    // Check if temp is above or equal to 85 and button is pressed
  if (temperatureF >= 85.0) {
   // digitalWrite(piezoBuzzerPin, HIGH);
    if (digitalRead(buttonPin) == HIGH) {
      tone(piezoBuzzerPin,400);
      // Ramp up motor speed
      for (int speed = 0; speed <= 50; speed++) {
        analogWrite(motorPin, speed);
        delay(50);
         tone(piezoBuzzerPin, 1000);
         delay(250);
         tone(piezoBuzzerPin, 1500);
         delay(250);
         noTone(piezoBuzzerPin);
      }
      // Ramp down motor speed
      for (int speed = 50; speed >= 0; speed--) {
        analogWrite(motorPin, speed);
        delay(50);
      }
    }
  } else {
    noTone(piezoBuzzerPin);
    analogWrite(motorPin, 0);
  }

  delay(500);
}
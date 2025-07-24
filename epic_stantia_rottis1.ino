int ledPin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  // Check for serial input commands
  if (Serial.available()) {
    char command = Serial.read();

    if (command == '1') {
      digitalWrite(ledPin, HIGH);
      Serial.println("Light ON");
    } 
    else if (command == '2') {
      digitalWrite(ledPin, LOW);
      Serial.println("Light OFF");
    }
  }

  // Simulate temperature and humidity readings
  float temp = 25.0;  // dummy temperature in Celsius
  float hum = 60.0;   // dummy humidity percentage

  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" °C | Humidity: ");
  Serial.println(hum);

  delay(2000);
}
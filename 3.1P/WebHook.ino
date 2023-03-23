int thermPin = A5;
int temp;

void setup() {
    pinMode(thermPin, INPUT);
}

void loop() {
	
	// Reading from the sensor (Thermistor).
	temp = analogRead(thermPin);
	
	// Convert to celsius.
	temp = (temp - 32) * 0.5;
	
	// Publishing the result.
    Particle.publish("temp", String(temp), PRIVATE); 
    delay(30000);
}

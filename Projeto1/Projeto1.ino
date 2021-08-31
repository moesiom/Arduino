//
// Exemplo sensor
//
#include <NewPing.h>

#define TRIGER_PIN 12 
#define ECHO_PIN 11 
#define MAX_DISTANCE 200

NewPing sonar(TRIGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
	Serial.begin(115200);
}

void loop() {
		delay(50);
		Serial.print("Ping: ");
		Serial.print(sonar.ping_cm());
		Serial.print("cm");
}

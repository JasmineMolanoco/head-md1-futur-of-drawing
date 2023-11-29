#define LED 13
#define BUTTON 8

void setup() {
pinMode(LED, OUTPUT);
pinMode(BUTTON, INPUT_PULLUP); // CONNECT INTERNAL PULL-UP RESISTOR INSIDE THE ARDUINO INSTEAD OF USING EXTERNAL RESISTOR
// turn the LED off when we start
digitalWrite(LED, LOW);
}

void loop() {
  // look at the state of the BUTTON HIGH(1) LOW(0)
boolean val = digitalRead(BUTTON);

digitalWrite(LED, val);
}


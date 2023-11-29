#define BUTTON_PIN 8
#define LED_PIN 13

void setup() {
pinMode(LED_PIN, OUTPUT);
pinMode(BUTTON_PIN, INPUT);// INPUT is optional since it is the default state for pins

// turn the LED of when we start
digitalWrite(LED_PIN, LOW);
}

void loop() {
boolean buttonPressed = digitalRead(BUTTON_PIN);

if (buttonPressed) {
    // turn the LED on
    digitalWrite(LED_PIN, HIGH);
}


}

// Lire l'état du bouton
#define LED 13
#define BUTTON 8
float lum = 15;  //luminosité entre 0 - 20

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {

  boolean btnDown = !digitalRead(BUTTON);

  // Modifie l'intensité avec le button
  if (btnDown) {
    lum = lum + 0.1;
    if (lum > 20) {
      lum = 0.0;
    }
  }

// controler la LED
  digitalWrite(LED, HIGH);
  delay(lum);
  digitalWrite(LED, LOW);
  delay(20 - lum);
}
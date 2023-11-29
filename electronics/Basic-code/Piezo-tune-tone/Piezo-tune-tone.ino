#define PIEZO 9
int bit = 0;

void setup() {
  pinMode(PIEZO, OUTPUT);
}

void loop() {

  // int value = analogRead(A0);
  // Serial.println(value);

  // bit = map(value, 0, 1023, 100, 0);

  // digitalWrite(PIEZO, HIGH);  // 5V
  // delay(bit);
  // digitalWrite(PIEZO, LOW);
  // delay(bit);

  // Play 1 sec
  tone(PIEZO, 2000, 1000);

  // wait 2 sec
  delay(2000);

  // play 1 sec
  tone(PIEZO, 4000);
  delay(1000);
  noTone(PIEZO);

  delay(1000);
}
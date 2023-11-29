#define PIEZO 9
int bit = 0;

void setup() {
  pinMode(PIEZO, OUTPUT);
}

void loop() {

  int value = analogRead(A0);
  Serial.println(value);

  bit = map(value, 0, 1023, 100, 0);

  digitalWrite(PIEZO, HIGH);  // 5V
  delay(bit);
  digitalWrite(PIEZO, LOW);
  delay(bit);
}
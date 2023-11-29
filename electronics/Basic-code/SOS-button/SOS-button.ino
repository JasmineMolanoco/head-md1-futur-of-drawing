#define LED 13

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly
  morse("Hello Jass");
}

void morse(String message) {
  Serial.print(message);

    for (char = c : message) {
      Serial.print(c);

      switch(c){
        case 'H' :ti();ti();ti(); break
      }
  }
}

void ti() {
  digitalWrite(ledPin, HIGH);
  delay(iTiLength);
  digitalWrite(ledPin, LOW);
  delay(iTiLength);
}

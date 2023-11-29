#define LED 13
#define BUTTON 8

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
  // print button state
  boolean btn = digitalRead(BUTTON);

  // print stays on the same lne println send to the next line
  // Serial.print(" Button is ");
  // Serial.println(btn);

  // print the time in millisecond \t is tab
  // show the graphe and make the transition smoth between the 0 & 1 state
  int frequencie = 1;  // hz

  Serial.println(sin(TWO_PI * frequencie * millis() / 1000.0));  // attention aux arrondis 1000.0 pour avoir un resultats en float

  Serial.print("\t");
  Serial.print(btn);
  Serial.println();
  // 100 est un dixième de seconde
  delay(100);
}

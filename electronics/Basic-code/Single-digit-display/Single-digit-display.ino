// import library for seven segment digit display
#include "SevSeg.h"
SevSeg sevseg;

void setup() {
  // Single digit display app

  byte numDigits = 1;                               // number of digit on the display
  byte digitPins[] = {};                            // byte array foe multy digit display
  byte segmentPins[] = { 6, 5, 2, 3, 4, 7, 8, 9 };  // which display segment is connected to which arduino pin (A segment is on pin 6, b is on pin 5 etc)
  bool resistorsOnSegments = true;                  //
  byte hardwareConfig = COMMON_CATHODE;             // sets the type of cathod display we're using here it's a cathode

  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);  // function to initialyz the display, pass the variable as parameters
  sevseg.setBrightness(100);                                                             // set brightness of the display
}

void loop() {
  // put your main code here, to run repeatedly:
  // counte down
  int num = 10;
  for (int i = num; i > -1; i--) {
    sevseg.setNumber(i);  // print i
    sevseg.refreshDisplay();
    delay(1000);
  }
}

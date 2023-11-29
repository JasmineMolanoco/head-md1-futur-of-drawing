// create constant LED with the value 13
// constants are in uppercase
#define LED 13
//define variable val with the value HIGH (is 1 so 5V)
boolean val = HIGH;

//Turn on a LED on pin 13
void setup () {
	pinMode(LED, OUTPUT);
	
}

void loop (){
 // pin your main code here, to run repeatedly
// turn on the LED on HIGH
	digitalWrite(LED, val);
// stop for 1 second
	delay(10000);
// turn off the LED on LOW (is 0 so 0V)
	digitalWrite(LED, LOW);
}
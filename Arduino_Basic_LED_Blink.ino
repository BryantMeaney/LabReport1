//Within this script we began with the basics of the Arduino program, we will start by making an LED blink every 500ms, this is to gain an understanding of the “digitalWrite” command, this is used to write a value to a designated digital pin. Along with that we included the “delay” command to pause the code for an assigned time.
void setup() {
  // initialize digital pin2 as an output.
  pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(2, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
}

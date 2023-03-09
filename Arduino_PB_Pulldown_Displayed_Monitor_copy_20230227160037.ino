// Within this script we will be reading the value of a push button with an external pulldown resistor and displaying that value to the serial monitor noticing the value is inversed from the previous circuit. We did this with the usage of  “digitalRead” to read the value of a pin that we set as an input with “pinMode” and then use “Serial.begin” and “Serial.print” to display the value. Along with this we became familiar with the use of a pull of resistor for the Arduino.
// sets integer names to pins 
int buttonState = 2;


void setup() {
  pinMode(2, INPUT);
  // Tells pin 2 to be an Input for the button
  Serial.begin(9600);
  // Tells Arduino speed of serial 
 digitalRead(buttonState);
// reads value of buttonState the integer

}


void loop() {

digitialRead(buttonState)
// Reads the value of the push button
Serial.print("The PB Value =" );
// writes the PB Value = on the serial monitor 
Serial.print("\t");
// puts a space on the serial monitor 
Serial.println(buttonState);
// prints the button state on the serial monitor 


}

//This code causes a strip of 4 LED’s to light up one after the other to create the appearance of “Chasing” With the Educational  purpose of this code was to become more familiar with ”digitalWrite” but more importantly we learned to set Integers to pins along with standard values.
// defines the blue Led as pin 2
int blueLed = 2;
// defines the yellow Led as pin 3
int yellowLed = 3;
// defines the green Led as pin 4
int greenLed = 4;
// defines the red Led as pin 5
int redLed = 5;
// sets the delay integer to 100ms
int Delay = (100);
void setup() {
  // set the Blue LED pin as output
  pinMode(blueLed, OUTPUT);
  // set the Yellow LED pin as output
  pinMode(yellowLed, OUTPUT);
  // set the Green LED pin as output
  pinMode(greenLed, OUTPUT);
  // set the Red LED pin as output
  pinMode(redLed, OUTPUT);
}
void loop() {
  // turn on blueLed
  digitalWrite(blueLed, HIGH);
  // wait 100ms
  delay(Delay);
  // turn off blueLed
  digitalWrite(blueLed, LOW);
  // turn on yellowLed
  digitalWrite(yellowLed, HIGH);
  // wait 100ms
  delay(Delay);
  // turn off yellowLed
  digitalWrite(yellowLed, LOW);
  // turn on greenLed
  digitalWrite(greenLed, HIGH);
  // wait 100ms
  delay(Delay);
  // turn off greenLed
  digitalWrite(greenLed, LOW);
  // turn on redLed
  digitalWrite(redLed, HIGH);
  // wait 100ms
  delay(Delay);
  // turn off redLed and start again with blueLed
  digitalWrite(redLed, LOW);
}
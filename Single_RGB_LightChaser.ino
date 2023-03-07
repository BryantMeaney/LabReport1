// This code is very similar to the previous two however instead of a strip of 4 LED’s to create the appearance of “Chasing” we will be utilizing a single RGB LED and cycling the three colours Red, Green, Blue. The lesson was similar to the previous with this allowing us to become more familiar with ”digitalWrite” to output to the LEDS , along with integers. but in addition we became familiar with the 4 prong RGB LED itself and its implementation in an Arduino circuit. 
// Define the RGB LED pins
// Assigning the pin 2 to the variable redLed
int redLed =(2);      
// Assigning the pin 3 to the variable greenLed
int greenLed =3;    
// Assigning the pin 4 to the variable blueLed
int blueLed =4;     
// Assigning Delay as an integer the value is 100ms
int Delay = 100;     
void setup() {
  // Set the RGB LED pins as outputs
   // set the redLed pin as an output
  pinMode(redLed, OUTPUT);   
  // Set the greenLed pin as an output
  pinMode(greenLed, OUTPUT);  
   // Set the blueLed pin as an output
  pinMode(blueLed, OUTPUT);  
}
void loop() {
  // Setting the redLed pin high
  digitalWrite(redLed, HIGH);   
   // Setting the greenLed pin low
  digitalWrite(greenLed, LOW); 
  // Setting the blueLed pin low
  digitalWrite(blueLed, LOW);   
  // Waiting for 100ms
  delay(Delay);                 
  
  // Setting the redLed pin low
  digitalWrite(redLed, LOW);    
   // Setting the greenLed pin high
  digitalWrite(greenLed, HIGH);
  // Setting the blueLed pin low
  digitalWrite(blueLed, LOW);   
  // Waiting for 100ms
  delay(Delay);                 
  
  // Setting the redLed pin low
  digitalWrite(redLed, LOW);    
   // Setting the greenLed pin low
  digitalWrite(greenLed, LOW); 
  // Setting the blueLed pin high
  digitalWrite(blueLed, HIGH);  
  // Waiting for 100ms
  delay(Delay);                 
}
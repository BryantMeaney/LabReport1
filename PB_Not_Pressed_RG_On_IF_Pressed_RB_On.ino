// This code will affect three LEDs a red, green and blue. When stationary the red and Green Led will be on, however when a push button is pressed the green will turn off and the blue LED will turn on. 
// The educational aspect of this code was similar to the previous with us combining  our knowledge of the push button with the “digitalRead” command along with the use of “digitalWrite” to turn on the LED, more importantly we became familiar with the usage of the if and how to set conditions such as the push button 

// Assigning the value 2 to the red led
int redLed =2; 
// Assigning the value 3 to the Green led
int greenLed = 3;
// Assigning the value 4 to the blue led
int blueLed = 4;
// Assigning the value 4 to the variable Pb  
int Pb= 4;      

void setup() {
  // Assiging input or output with digitial pins
  // Configuring the White pin as an output
  pinMode(redLed,OUTPUT);   
  // Configuring the Green pin as an output
  pinMode(greenLed,OUTPUT);   
   // Configuring the Blue pin as an output
  pinMode(blueLed,OUTPUT);   
  // Sets the Pb pin as an input with an internal pull-up resistor 
  pinMode(Pb,INPUT_PULLUP); 
}

void loop() {
  // telling it to turn the RGB green when pressed
  // Checking if the Pb pin is HIGH (1)
  if (digitalRead(Pb)==1){  
    // Setting the Blue Led high
    digitalWrite(blueLed,1); 
    // Setting the red Led High         
    digitalWrite(redLed,1);
    // Setting the Green Led low        
    digitalWrite(greenLed,0);
  }
  // Telling the RGB to be white when the button isnt being pressed
   // Otherwise (if the Pb pin is LOW, i.e., not pressed)
  else{          
    // Setting the Green Led High         
    digitalWrite(greenLed,1); 
    // Setting the Blue Led Low        
    digitalWrite(blueLed,0);
    // Setting the red Led High         
    digitalWrite(redLed,1);

           
}
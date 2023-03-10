// The purpose of this code is to make the RGB LED go white when the Push button Is not pressed and then go black if the push button is being pressed, the purpose of this code was to combine our knowledge of the push button with the “digitalRead” command along with the use of “digitalWrite” to turn on the LED, more importantly we became familiar with the usage of the if and how to set conditions such as the push button.”
// assigning integer Values to pins 
// Assigning the pin 2 to the variable Red
int Red = 3; 
// Assigning the pin 4 to the variable Green  
int Green = 4;
// Assigning the value 5 to the variable Blue
int Blue = 5;
// Assigning the value 4 to the variable Pb  
int Pb= 2;      

void setup() {
  // Assiging input or output with digitial pins
  // Configuring the Red pin as an output
  pinMode(Red,OUTPUT);   
  // Configuring the Blue pin as an output
  pinMode(Blue,OUTPUT);   
  // Configuring the Green pin as an output
  pinMode(Green,OUTPUT);   
  // Sets the Pb pin as an input with an internal pull-up resistor 
  pinMode(Pb,INPUT_PULLUP); 
}

void loop() {
  // telling it to turn the RGB green when pressed
  // Checking if the Pb pin is HIGH (1)
  if (digitalRead(Pb)==0){  
    // Setting the Green pin HIGH (1)
    digitalWrite(Red,1); 
    digitalWrite(Green,1);
    digitalWrite(Blue,1);
  }
  // Telling the RGB to be white when the button isnt being pressed
   // Otherwise (if the Pb pin is LOW, i.e., not pressed)
  else{          
    // Setting the Red pin LOW         
    digitalWrite(Red,0); 
    // Setting the Green pin LOW 
    digitalWrite(Green,0);
    // Setting the Blue pin LOW 
    digitalWrite(Blue,0);
     
}
  }


  

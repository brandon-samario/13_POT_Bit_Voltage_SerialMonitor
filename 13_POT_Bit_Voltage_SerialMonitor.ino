/*
  POT Bit Value and Voltage on Serial Monitor
  Use potentiometer, set pin to A0 as input
  It reads a analog input on pin A0 and prints the results to the Serial Monitor, bit value and voltage
  Use serial begin to start serial monitoring, and use serial.print or serial.println to print value
  Use float to convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V)
  As you turn the potentiometer the bit value increases and so does the voltage
*/

// the setup function runs once when you press reset or power the board
void setup() {

Serial.begin(9600); // initialize serial communication
Serial.println("Reading Analog Value"); // pushbutton print value
}

// the loop routine runs over and over again forever
void loop() {
  
  int potValue = analogRead(A0); // read the input on analog pin 0
  
  Serial.print("potValue:"); // print out the state of the button
  Serial.print(potValue); // print out the value you read
  Serial.print(" Voltage:"); // print out the state of the button
  float voltage = potValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V)
  Serial.print(voltage); // print out the value you read
  Serial.println("V"); // print out the state of the button
  
  delay(100); // delay between each read
}


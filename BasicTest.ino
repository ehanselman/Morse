
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(0, INPUT); //Button press
  pinMode(1, OUTPUT); //LED on Model A  or Pro
  pinMode(5, OUTPUT); //Tone output
}

// the loop routine runs over and over again forever:
void loop() {
     // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  tone(5,500);
  delay(500);               // wait for a second
      // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  noTone();
  delay(500);               // wait for a second
}

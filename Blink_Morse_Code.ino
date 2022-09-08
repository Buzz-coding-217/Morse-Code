void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}
String code = "";
int unit  = 200;

//void will make the arduino to blink for 1 unit (representing a dot)
void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(unit * 1);
  digitalWrite(LED_BUILTIN, LOW);    
  delay(unit * 1); 
}

//void will make the arduino to blink for 3 unit (representing a slash)
void slash()
{
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(unit * 3);
  digitalWrite(LED_BUILTIN, LOW);    
  delay(unit * 1); 
}
//this void will check each character of string and run its morse code blink
void morse_code(String x){
  for(int i = 0; i < x.length(); i++)
  {
    switch(x[i])
    {
      case 'a':
        dot();
        slash();
        break;
      case 'b':
        slash();
        dot();
        dot();
        dot();
        break;
      case 'c':
        slash();
        dot();
        slash();
        dot();
        break;
      case 'd':
        slash();
        dot();
        dot();
        break;
      case 'e':
        dot();
        break;
      case 'f':
        slash();
        dot();
        dot();
        slash();
        dot();
        break;
      case 'g':
        slash();
        slash();
        dot();
        break;
      case 'h':
        dot();
        dot();
        dot();
        dot();
        break;
      case 'i':
        dot();
        dot();
        break;
      case 'j':
        dot();
        slash();
        slash();
        slash();
        break;
      case 'k':
        slash();
        dot();
        slash();
        break;
      case 'l':
        dot();
        slash();
        dot();
        dot();
        break;
      case 'm':
        slash();
        slash();
        break;
      case 'n':
        slash();
        dot();
        break;
      case 'o':
        slash();
        slash();
        slash();
        break;
      case 'p':
        dot();
        slash();
        slash();
        dot();
        break;
      case 'q':
        slash();
        slash();
        dot();
        slash();
        break;
      case 'r':
        dot();
        slash();
        dot();
        break;
      case 's':
        dot();
        dot();
        dot();
        break;
      case 't':
        slash();
        break;
      case 'u':
        dot();
        dot();
        slash();
        break;
      case 'v':
        dot();
        dot();
        dot();
        slash();
        break;
      case 'w':
        dot();
        slash();
        slash();
        break;
      case 'x':
        slash();
        dot();
        dot();
        slash();
        break;
      case 'y':
        slash();
        dot();
        slash();
        slash();
        break;
      case 'z':
        slash();
        slash();
        dot();
        dot();
        break;
    }
    delay(unit * 3);
  }
}
void loop() {
  while(Serial.available()) {           //check the serial input from serial monitor
    char input = (char)Serial.read();   //read each character from string and store it in one variable
    code += input;
  }
  morse_code(code);
}

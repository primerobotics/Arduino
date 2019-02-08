//Controlling Led By Button
//Turns on and off a LED ,when pressings button attach to pin12
//Email:info@primerobotics.in
//Website:www.primerobotics.in

/**********************************/
const int buttonPin = 12; //the button connect to pin 12
const int ledPin = 13;//the led connect to pin13
/**********************************/
int buttonState = 0;         // variable for reading the pushbutton status

void setup()
{
  pinMode(buttonPin, INPUT); //initialize thebuttonPin as input
  pinMode(ledPin, OUTPUT); //initialize the led pin as output
}
/**********************************/
void loop()
{
  //read the state of the button value
  buttonState = digitalRead(buttonPin);
  
  //and check if the key is pressed
  //if it is,the state is HIGH
  if (buttonState == HIGH )
  {
    digitalWrite(ledPin, HIGH); //turn the led on
  }
  else
  {
    digitalWrite(ledPin, LOW); //turn the led off
  }
}
/************************************/

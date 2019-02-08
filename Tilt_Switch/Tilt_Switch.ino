//tilt switch
//tilt the switch, and the LED attached to pin 13 on SunFounder Uno board will light up.
//tilt switch attach to pin2
//Email: info@primerobotics.in
//Website: www.primerobotics.in
/*****************************************/
const int ledPin = 13;//the led attach to

void setup()
{ 
  pinMode(ledPin,OUTPUT);//initialize the ledPin as an output
  pinMode(2,INPUT);//set pin2 as INPUT
  digitalWrite(2, HIGH);//set pin2 as HIGH
} 
/******************************************/
void loop() 
{  
  int digitalVal = digitalRead(2);//Read the value of pin2
  if(HIGH == digitalVal)//if tilt switch is not breakover
  {
    digitalWrite(ledPin,LOW);//turn the led off
  }
  else ////if tilt switch breakover
  {
    digitalWrite(ledPin,HIGH);//turn the led on 
  }
}
/**********************************************/

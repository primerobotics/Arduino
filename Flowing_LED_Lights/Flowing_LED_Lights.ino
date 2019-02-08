//Flowing LED Lights
/* Eight LEDs will light up one by one from left to right, and then go out one by one from right to left.
After that, the LEDs will light up one by one from right to left, and then go out one by one from left to right.
This process will repeat indefinitely.*/
//Email:info@primerobotics.in
//Website:www.primerobotics.in
/**************************************/
const int lowestPin = 2;//the lowest one attach to
const int highestPin = 9;//the highest one attach to 
/**************************************/
void setup()
{
  //set pins 2 through 9 as output  
  for(int thisPin = lowestPin;thisPin <= highestPin;thisPin++)
  {
     pinMode(thisPin,OUTPUT); //initialize thisPin as an output
  }
} 
/****************************************/
void loop()
{
  //iterate over the pins
  //turn the led on from lowest to the highest
  for(int thisPin = lowestPin;thisPin <= highestPin;thisPin++)
  {
    digitalWrite(thisPin,HIGH);//turn this led on
    delay(100);//wait for 100 ms
  }
  //fade from the highest to the lowest
  for(int thisPin = highestPin;thisPin>=lowestPin;thisPin--)
  {
    digitalWrite(thisPin,LOW);//turn this led off
    delay(100);//wait for 100 ms
  }
  for(int thisPin = highestPin;thisPin>=lowestPin;thisPin--)
  {
    digitalWrite(thisPin,HIGH);//turn this led on
    delay(100);//wait for 100 ms
  }
  for(int thisPin = lowestPin;thisPin <= highestPin;thisPin++)
  {
    digitalWrite(thisPin,LOW);//turn this led off
    delay(100);//wait for 100 ms
  }
}

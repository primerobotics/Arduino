//Simple Creation - Light Alarm
//Now, you can hear that the buzzer make sounds when the LED is shined.
//Email: info@primerobotics.in
//Website:www.primerobotics.in
void setup()
{
  Serial.begin(9600);  // start serial port at 9600 bps:
}
void loop()
{
  int n=analogRead(A0); //read the value from analog pin AO  
  Serial.println(n);
  if(n>0) //If there is a voltage
  {
    pinMode(5,OUTPUT);  //set the digital pin 5 as an output
    tone(5,10000);  //Generates a square wave(10000 Hz frequency,50% duty cycle) on pin 5 
    pinMode(5,INPUT);  //set the pin 5 as an input
  }
}

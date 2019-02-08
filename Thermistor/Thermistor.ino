/************************************
 * name:thermistor
 * function:you can see current temperature displayed on the serial monitor.
 **************************************/
//Email: info@primerobotics.in
//Website: www.primerobotics.in

#define analogPin  A0 //the thermistor attach to 
#define beta 3950 //the beta of the thermistor
#define resistance 10 //the value of the pull-down resistor

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //read thermistor value 
  long a = analogRead(analogPin);
  //the calculating formula of temperature
  float tempC = beta /(log((1025.0 * 10 / a - 10) / 10) + beta / 298.0) - 273.0;
  //float tempF = 1.8*tempC + 32.0;//convert centigrade to Fahrenheit
  Serial.print("TempC:  ");//print" TempC: "
  Serial.print(tempC);//print Celsius temperature
  Serial.print("  C");//print the unit
  Serial.println();
  //Serial.print("TempF:  ");
 // Serial.print(tempF);
 // Serial.print("  F");
  delay(200); //wait for 200 milliseconds
}

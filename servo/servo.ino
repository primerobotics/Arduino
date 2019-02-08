/***********************************************
 * name:Servo
 * function:you can see the servo motor rotate 90 degrees (rotate once every 15 degrees).
 * And then rotate in the opposite direction.
 ************************************************/
 //Email: info@primerobotics.in
//Website: www.primerobotics.in

#include <Servo.h>
/************************************************/
Servo myservo;//create servo object to control a servo
/************************************************/
void setup()
{
  myservo.attach(9);//attachs the servo on pin 9 to servo object
  myservo.write(0);//back to 0 degrees 
  delay(1000);//wait for a second
}
/*************************************************/
void loop()
{  
  myservo.write(15);//goes to 15 degrees 
  delay(1000);//wait for a second
  myservo.write(30);//goes to 30 degrees 
  delay(1000);//wait for a second.33
  myservo.write(45);//goes to 45 degrees 
  delay(1000);//wait for a second.33
  myservo.write(60);//goes to 60 degrees 
  delay(1000);//wait for a second.33
  myservo.write(75);//goes to 75 degrees 
  delay(1000);//wait for a second.33
  myservo.write(90);//goes to 90 degrees
  delay(1000);//wait for a second
  myservo.write(75);//back to 75 degrees 
  delay(1000);//wait for a second.33
  myservo.write(60);//back to 60 degrees
  delay(1000);//wait for a second.33
  myservo.write(45);//back to 45 degrees
  delay(1000);//wait for a second.33
  myservo.write(30);//back to 30 degrees
  delay(1000);//wait for a second.33
  myservo.write(15);//back to 15 degrees 
  delay(1000);//wait for a second
  myservo.write(0);//back to 0 degrees 
  delay(1000);//wait for a second
}
/**************************************************/

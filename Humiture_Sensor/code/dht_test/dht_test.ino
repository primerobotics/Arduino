#include <dht.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(4, 5, 9, 10, 11, 12);

dht DHT;

#define DHT11_PIN 4

void setup()
{
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop()
{
  // READ DATA
  Serial.print("DHT11, \t");
  //read the value returned from sensor
  int chk = DHT.read11(DHT11_PIN);
  switch (chk)
  {
    case DHTLIB_OK:  
		Serial.print("OK,\t"); 
		break;
    case DHTLIB_ERROR_CHECKSUM: 
		Serial.print("Checksum error,\t"); 
		break;
    case DHTLIB_ERROR_TIMEOUT: 
		Serial.print("Time out error,\t"); 
		break;
    default: 
		Serial.print("Unknown error,\t"); 
		break;
  }
 // DISPLAY DATA
 lcd.setCursor(0, 0);
 lcd.print("Tem:");
 lcd.print(DHT.temperature,1); //print the temperature on lcd
 lcd.print(" C");
 lcd.setCursor(0, 1);
 lcd.print("Hum:");
 lcd.print(DHT.humidity,1); //print the humidity on lcd
 lcd.print(" %"); 
 delay(200); //wait a while 
}

#include <ReadKey.h>

#define KEY_PIN 0

ReadKey keypad(KEY_PIN);

void setup()
{	
  Serial.begin(9600);
}

void loop()
{
	keypad.read();
	
	if(keypad.isPress())
	{
		switch(keypad.key())
		{
			case btnRIGHT:
				Serial.println("btnRIGHT");
				// btnRIGHT press
				break;
			case btnUP:
				Serial.println("btnUP");
				// btnUP press
				break;
			case btnDOWN:
				Serial.println("btnDOWN");
				// btnDOWN press
				break;
			case btnLEFT:
				Serial.println("btnLEFT");
				// btnLEFT press
				break;
			case btnSELECT:
				Serial.println("btnSELECT");
				// btnSELECT press
				break;
			default:
				break;
		}
	}
}

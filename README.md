# ReadKey
Permet la lecture d'un keypad.

## Constantes
 * `btnRIGHT` = 0
 * `btnUP` = 1
 * `btnDOWN` = 2
 * `btnLEFT` = 3
 * `btnSELECT` = 4
 * `btnNONE` = 5

## Méthodes
* [ReadKey()](#readkeyio_pin)
* [read()](#read)
* [isPress()](#ispress)
* [key()](#key)
* [val()](#val)

-------------

### ReadKey(IO_Pin)
Instancie l'objet ReadKey.

Paramètres	  | Type | Requis | Description
------------- | ---- | ------ | -----------
IO_Pin	      | int  | Non	  | Broche analogique où est connecté le keypad.


-------------

### read()
Lance la lecture.


-------------

### isPress()
Renvoie `true` si une touche à été appuyer.


-------------

### key()
Renvoie l'identifiant de la touche appuyé sous la forme d'un entier.
`btnRIGHT` , `btnUP` , `btnDOWN` , `btnLEFT` , `btnSELECT` , `btnNONE`.


-------------

### val()
Renvoie la valeur lu lors de l'appel de `read()` sous la forme d'un entier.


-------------

## Exemple
  * [Simple.ino](https://github.com/Artnod-Arduino/ReadKey/blob/master/ReadKey/examples/Simple/Simple.ino)
  ```c++
  #include <ReadKey.h>

#define KEY_PIN 0

ReadKey keypad(KEY_PIN);

void setup()
{	
}

void loop()
{
	keypad.read();
	
	if(keypad.isPress())
	{
		switch(keypad.key())
		{
			case btnRIGHT:
				// btnRIGHT press
				break;
			case btnUP:
				// btnUP press
				break;
			case btnDOWN:
				// btnDOWN press
				break;
			case btnLEFT:
				// btnLEFT press
				break;
			case btnSELECT:
				// btnSELECT press
				break;
			default:
				break;
		}
	}
}
  ```

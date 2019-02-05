#include<avr/io.h>
#include<util/delay.h>
#include"lcd_lib.h"

char name1[]={"VU"};
char name2[]={"dept cse"};
char name[]={"FARHAN MASUD"};
char value[]={"151311051"};


int main()
{
LCDinit();
//LCDcursorOn();
//LCDcursorOnBlink();
//LCDhome();
LCDGotoXY(6,0);
LCDstring(name1,2);
LCDGotoXY(3,1);
LCDstring(name2,8);
_delay_ms(1000);
LCDclr();
_delay_ms(1000);
LCDGotoXY(2,0);
LCDstring(name,12);
LCDGotoXY(3,1);
LCDstring(value,9);
//LCDGotoXY(8,1);
_delay_ms(1000);
//LCDblank();

_delay_ms(500);
//LCDvisible();
_delay_ms(1000);
//LCDclr();
//LCDcursorRight(3);
//LCDcursorOnBlink();

/*for(int i=0;i<=15;i++)
{
LCDshiftLeft(1);
_delay_ms(200);
}*/
}




/*void USART_Init (unsigned int baud)
{
//Put the upper part of the baud number here (bits 8 to 11)
UBRRH = (unsigned char) (baud >> 8);

//Put the remaining part of the baud number here
UBRRL = (unsigned char) baud; 

//Enable the receiver and transmitter
UCSRB =(1 << TXEN);

//Set 2 stop bits and data bit length is 8-bit
UCSRC = (1 << USBS) | (3 << UCSZ0);//(1 << URSEL)
}
/*LCD functions are - 
1. 	LCDsendChar()			-	writes character on LCD
2. 	LCDsendCommand()		-	Sends command to LCD
3. 	LCDinit(void)			-	Initializes LCD
4.	LCDclr(void)			-	Clears LCD
5.	LCDhome(void)			-	LCD cursor home
6.	LCDstring(*data, bytes)	-	Writes string to LCD
7.	LCDGotoXY(X,Y)			-	Cursor to X, Y position
8.	CopyStringtoLCD()		-	Copy string from flash memory to LCD
9.	LCDdefinechar()			-	Define Character symbol in CGRAM
10.	LCDshiftLeft(n)			-	Shifts character on LCD Left	
11.	LCDshiftRight(n)		-	Shifts character on LCD Right
12.	LCDcursorOn(void)		-	Cursor is visible
13.	LCDcursorOnBlink(void)	-	Cursor is on and blinking
14.	LCDcursorOFF(void)		-	Cursor is invisible
15.	LCDblank(void)			-	Blanks the LCD
16.	LCDvisible(void)		-	Shows LCD
17.	LCDcursorLeft(n)		-	Shifts the cursor left by n place
18.	LCDcursorRight(n)		-	Shifts the cursor right by n place
19.	LCDprogressBar()		-	progress bar on LCD
*/

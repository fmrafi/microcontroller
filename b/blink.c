#include<avr/io.h>
#include<util/delay.h>


int main()
{
DDRD=0xFF;
while(1)
{

PORTD=0b10101010;
_delay_ms(500);
PORTD=0b01010101;
_delay_ms(500);
}
}
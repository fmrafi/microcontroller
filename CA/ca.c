#include<avr/io.h>
#include<util/delay.h>
int main()
{
DDRB=0xFF;
PORTB=0xff;
while(1)
{
PORTB=0b01000000;
_delay_ms(1000);
PORTB=0b01111001;
_delay_ms(1000);
PORTB=0b00100100;
_delay_ms(1000);
PORTB=0b00110000;
_delay_ms(1000);
PORTB=0b00011001;
_delay_ms(1000);
PORTB=0b00010010;
_delay_ms(1000);
PORTB=0b00000010;
_delay_ms(1000);
PORTB=0b01111000;
_delay_ms(1000);
PORTB=0b00000000;
_delay_ms(1000);
PORTB=0b00010000;
_delay_ms(1000);
}
}
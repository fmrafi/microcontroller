#include<avr/io.h>
#include<util/delay.h>
int main()
{
DDRD=0xFF;
while(1)
{
PORTD=0b00111111;
_delay_ms(1000);
PORTD=0b00000110;
_delay_ms(1000);
PORTD=0b01011011;
_delay_ms(1000);
PORTD=0b01001111;
_delay_ms(1000);
PORTD=0b01100110;
_delay_ms(1000);
PORTD=0b01101101;
_delay_ms(1000);
PORTD=0b01111101;
_delay_ms(1000);
PORTD=0b00000111;
_delay_ms(1000);
PORTD=0b01111111;
_delay_ms(1000);
PORTD=0b01101111;
_delay_ms(1000);
}
}
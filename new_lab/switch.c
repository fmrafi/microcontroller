#include<avr/io.h>
#include<util/delay.h>
int main()
{
int a=0;
/*DDRB=0b00000011;
PORTB=0b00000100;*/
DDRB |=(1<<PINB0);
DDRB |=(1<<PINB1);
DDRB &=~(1<<PINB2);
PORTB |=(1<<PINB2);
PORTB |=(1<<PINB1);
while(1)
if(bit_is_clear(PINB,2))
{
if(a==0)
{
//PORTB=0b00000001;
PORTB ^=(1<<PINB0);
PORTB ^=(1<<PINB1);
a=1;
}
}
else
{
//PORTB=0b00000010;
a=0;
}
}
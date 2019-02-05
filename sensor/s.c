#include<avr/io.h> 
#include<util/delay.h> 
int adc_init(); 
int adc_read(); 
int main()
{
DDRB=0xff; 
adc_init(); 
while(1)
{
int adc_value=adc_read();
if (adc_value<60)
PORTB=0b00000001; 
else if(adc_value>82) 
PORTB=0b00000010; 
else
PORTB=0xff; 
}
}
int adc_init() 
{
ADMUX |=(1 << REFS1) | (1 << REFS0);
ADCSRA |=(1 << ADPS0) | (1 << ADPS1) | (1 << ADPS2);
ADCSRA |=(1 << ADEN);
}
int adc_read() 
{
ADMUX |=(1 << MUX0);
ADCSRA |=(1 << ADSC);
while(ADCSRA & (1<<ADSC));
return ADC;
}
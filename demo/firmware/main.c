#include <avr/io.h>
#include <util/delay.h>

#define LED1 PB4 
#define LED2 PB3

void delay ( int ms)
{
	while ( ms-- > 0 ) _delay_ms( 1 );
}

int main(void)
{

    DDRB = 1 << LED1 | 1 << LED2;           /* make the LED pin an output */
 
   while( 1 ) {
	PORTB = 1 << LED1 | 0 << LED2;
	delay ( 100 );
	PORTB = 0 << LED1 | 1 << LED2;
	delay ( 100 );
   }
 
   return 0;               /* never reached */
}

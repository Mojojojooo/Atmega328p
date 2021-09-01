/*
 * blink.c
 *
 * Created: 9/1/2021 5:10:38 PM
 * Author : yashw
 */ 
#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	DDRB = 0b01000000;
    while (1) 
    {
		PORTB = 0b00000000;
		_delay_ms(2000);
		PORTB = 0b00000000;
		_delay_ms(2000);
    }
}


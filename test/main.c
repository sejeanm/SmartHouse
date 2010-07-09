#include <avr/io.h>
int main(void) {
	int i=0;

	DDRB = 0xFF;
	DDRB= 0x00;

	while(1) {

	 i++;

	 PORTB=0x0F;

	}

	return 0;
}

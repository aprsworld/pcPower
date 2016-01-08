#include "pcPower.h"

void init(void) {
	setup_oscillator(OSC_8MHZ);

	port_a_pullups(0b00111111);
	port_b_pullups(0b01011111);
}


void main(void) {
	int8 i;

	init();

#if 0
	for ( ; ; ) {
		output_bit(PIC_LED_GREEN,input(SW_MAGNET));
		restart_wdt();
	}
#endif


	output_high(PI_POWER_EN);

	for ( i=0 ; i<10 ; i++ ) {
		fprintf(STREAM_PI,"# pass one i=%u\r\n",i);
		output_high(PIC_LED_GREEN);
		delay_ms(500);
		output_low(PIC_LED_GREEN);
		delay_ms(500);

		restart_wdt();
	}

	output_low(PI_POWER_EN);

	for ( i=0 ; i<10 ; i++ ) {
		fprintf(STREAM_PI,"# pass two i=%u\r\n",i);
		output_high(PIC_LED_GREEN);
		delay_ms(500);
		output_low(PIC_LED_GREEN);
		delay_ms(500);

		restart_wdt();
	}

}
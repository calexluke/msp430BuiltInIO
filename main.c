#include <msp430.h>
#include "msp430BuiltInIO.h"


/**
 *  Include msp430BuiltInIO.h/.c in your msp430 project and simplify how you use the built-in buttons and LEDs on the board.
 *  Call configureBuiltInIO() in main.c, and you can then use easy-to-read syntax to read input from the built-in buttons and
 *  control the built-in LEDs.
 *
 *  See below for example code.
 *
 */

int main(void)
{
    // stop watchdog timer
    WDTCTL = WDTPW | WDTHOLD;

    configureBuiltInIO();

  // Disable the GPIO power-on default high-impedance mode to activate
  // previously configured port settings
  PM5CTL0 &= ~LOCKLPM5;

	while(1) {

	    BUTTON_STATE button1 = readButton1();
	    BUTTON_STATE button2 = readButton2();

		if (button1 == PRESSED) {
			setLED1(ON);
		} else {
			setLED1(OFF);
		}

		if (button2 == NOT_PRESSED) {
			setLED2(ON);
		} else {
			setLED2(OFF);
		}
	}

	return 0;
}



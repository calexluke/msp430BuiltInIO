# msp430BuiltInIO
Simplify how you use the built-in buttons and LEDs on the MSP430FR6989 board. 


Include msp430BuiltInIO.h/.c in your msp430 project and simplify how you use the built-in IO.
Just call configureBuiltInIO() in your main.c file, and you can then use easy-to-read syntax to read input from the built-in buttons and
control the built-in LEDs.

Read input from buttons:

```
readButton1();
```
```
readButton2();
```
These both return a BUTTON_STATE enum value - either PRESSED or NOT_PRESSED.

Use ON or OFF to control LEDs: 

```
setLED1(ON);
```
```
setLED1(OFF);
```
```
setLED2(ON);
```
```
setLED2(OFF);
```

See main.c in this repo for example code.

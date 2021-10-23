# msp430BuiltInIO
Use this library to simplify how you use the built-in buttons and LEDs on the MSP430FR6989 board. 


Include msp430BuiltInIO.h and msp430BuiltInIO.c in your msp430 project and simplify how you use the built-in IO.

## Setup

```
configureBuiltInIO();
```
Just call this in your main.c file, and you can then use easy syntax to read input from the built-in buttons and
control the built-in LEDs.

## Read input from buttons:

```
BUTTON_STATE input1 = readButton1();
```
```
BUTTON_STATE input2 = readButton2();
```
The returned BUTTON_STATE enum value is either PRESSED or NOT_PRESSED.

## Use ON or OFF to control LEDs: 

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
## Example Code
See main.c in this repo for example code.

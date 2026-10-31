/*
In this question you will write a program in C that allows a user to convert temperatures.
When the program starts, an introduction message is displayed showing the temperature scale
codes. The user is then prompted to input the temperature scale to convert from (the user
enters an integer here), the temperature value, and the scale to convert to (also
represented by an integer). When all of this information has been entered, the program
displays the converted temperature with two decimal places.

After the conversion, the program asks the user if they want to perform another conversion.
If so, the process repeats (including the introduction message). If not, the program terminates.

A sample run is shown below.

> Welcome to TConvert 1.0
> 1=Celsius, 2=Fahrenheit, 3=Kelvin
> Enter scale to convert from: 1
> Enter value to convert: 100.0
> Enter scale to convert to: 2
> 100.00 °C equals 212.00 °F
> Do you wish to convert again? (Y/N): Y
> 1=Celsius, 2=Fahrenheit, 3=Kelvin
> Enter scale to convert from: 3
> Enter value to convert: 273.15
> Enter scale to convert to: 1
> 273.15 K equals 0.00 °C
> Do you wish to convert again? (Y/N): N
> Goodbye!

The following diagram is a modular structure chart to represent the design of the program
that you will write. Assume that the functions in `` have been given to you,
you do not have to write them, just use them. A description of each function appears
below in the prototype section of the code.

.                              main
.                               │
.            ┌──────────────────┼───────────────┐─────────────┐
.            │                  │               │             │
.    `printHelpMessage`    convertTemp     printResult     `doAgain`
.                                               │
.                                               │
.                                         `getUnitName`

*/

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

/* Given functions (you may use them, do not write them) */

/* Prints the unit symbol for the given scale code (no newline) */
void getUnitName(int code);

/* Asks the user for Y or N, returns TRUE if Y, FALSE if N */
int doAgain(void);

/* Prints the help message showing available temperature scale codes */
void printHelpMessage(void);

/* -------- Functions you must write -------- */

/* Converts temperature value from scale 'fromCode' to 'toCode' */
double convertTemp(double value, int fromCode, int toCode);

/* Prints result in format:
   "100.00 °C equals 212.00 °F"
*/
void printResult(double convertedValue, double originalValue,
                 int fromCode, int toCode);


/* main function and implementations follow */
int main(void) {

    // Part (a): Complete the missing parts of main().
    //           You do not need to check the user input for validity.
    int fromCode, toCode;
    double originalValue, convertedValue;
    printf("Welcome to TConvert 2.0.\n");

    do {
        printHelpMessage();

        /* Write your code here */

        convertedValue = convertTemp(originalValue, fromCode, toCode);
        printResult(convertedValue, originalValue, fromCode, toCode);

    } while ( /* write condition here */ );

    printf("Goodbye!\n");
    return 0;
}


// Part (b): Write the complete implementation of the function convertTemp.


// Part (c): Write the complete implementation of the function printResult.
//           Hint: You may use the provided function getUnitName() when printing.
/*

In this question, you will be making a program that will convert between binary and decimal numbers.
To make things simpler, we will divide this program into smaller parts. Do not use the math.h library.

  (a) Make a function called bin2dec() that accepts a binary number (which you can treat as an integer)
      and returns the converted decimal number.

  (b) Make a function called dec2bin() that accepts a decimal number (which you can treat as an integer)
      and returns the converted binary number (also in integer).

  (c) Make a function called bincheck() that accepts an integer and see if it is a binary number.
      Return true or false.

  (d) Finally, using the functions you just made, make a program that asks the user what they want to
      input (decimal or binary), then asks for the user input (check for validity if applicable),
      then converts and prints the result of the calculation. The program should also ask if the user
      wants to repeat the program or not.

A sample run can be seen below:

>>> Input 1 for decimal to binary converter , 2 for binary to decimal converter: 1
>>> Input a number: 123
>>> Invalid. Input a binary number: 123
>>> Invalid. Input a binary number: 101001
>>> 101001 in decimal is 41.
>>> Input 1 to repeat conversion , or 0 to exit: 1
>>> Input 1 for decimal to binary converter , 2 for binary to decimal converter: 2
>>> Input a number: 423
>>> 423 in binary is 110100111.
>>> Input 1 to repeat conversion , or 0 to exit: 0
=== Code Execution Successful ===

*/
#include <stdio.h>


/*
.                       1st loop               2nd loop             3rd loop            4th loop         5th loop (STOP)

binary  ->  1101    ->  1101 % 10 = 1(d)  ->   110 % 10 = 0(d)  ->  11 % 10 = 1(d)  ->  1 % 10 = 1(d)   ->  0
                        1101 / 10 = 110        110 / 10 = 11        11 / 10 = 1         1 / 10 = 0


deciaml -> 0        -> 1 [0+1*1(b)]       -> 1 [1+0*2(b)]       -> 5 [1+1*4(b)]     -> 13 [5+1*8(b)]    ->
base    -> 1        -> 2                  -> 4                  -> 8                -> 16
*/
int bin2dec(int binary) {
    int digit; // d
    int base = 1; // 2^0 = 1

    int decimal = 0;
    while (binary > 0) {
        digit = binary % 10;
        binary /= 10;

        decimal += digit * base;
        base *= 2;
    }

    return decimal;
}


int dec2bin(int decimal) {
    int binary = 0;
    int place  = 1;

    while (decimal > 0) {               // 13           6               3               1               0(STOP)
        int reminder = decimal % 2;     // 1            0               1               1
        binary += reminder * place;     // 1            1 + 0*10        1 + 1*100       101 + 1*1000
        place *= 10;                    // 1 -> 10      10 -> 100       100 -> 1000     1000 -> 10000
        decimal /= 2;                   // 13 -> 6      6 -> 3          1               0
    }

    return binary;  // 1101
}


#define TRUE 1
#define FALSE 0
int bincheck(int binary) {
    int isBin = TRUE;
    while (isBin && binary != 1 && binary != 0) {
        if (binary % 10 != 1 || binary % 10 != 0) {
            isBin = FALSE;
        }
        binary /= 10;
    }

    return isBin;
}

// >>> Input 1 for decimal to binary converter , 2 for binary to decimal converter: 2
// >>> Input a number: 123
// >>> Invalid. Input a binary number: 123
// >>> Invalid. Input a binary number: 101001
// >>> 101001 in decimal is 41.
// >>> Input 1 to repeat conversion , or 0 to exit: 1
// >>> Input 1 for decimal to binary converter , 2 for binary to decimal converter: 1
// >>> Input a number: 423
// >>> 423 in binary is 110100111.
// >>> Input 1 to repeat conversion , or 0 to exit: 0
// === Code Execution Successful ===
int main() {
    int convertStatus, userInput, converted;

    int exitStatus = 1;

    do {
        printf("Input 1 for decimal to binary converter , 2 for binary to decimal converter: ");
        scanf("%d", &convertStatus);

        printf("Input a number: ");
        scanf("%d", &userInput);

        if (convertStatus == 2) {

            while (!bincheck(userInput)) {
                printf("Invalid. Input a binary number: ");
                scanf("%d", &userInput);
            }

            converted = bin2dec(userInput);
            printf("%d in decimal is %d.", userInput, converted);
        } else {
            converted = dec2bin(userInput);
            printf("%d in binary is %d.", userInput, converted);
        }

        printf("Input 1 to repeat conversion , or 0 to exit: ");
        scanf("%d", &exitStatus);

    } while (exitStatus); // 1->True, 0->False

    return 0;
}
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

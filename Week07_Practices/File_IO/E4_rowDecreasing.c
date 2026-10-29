/*

Assume we have a text file that contains an unknown number of rows of data. On each row there are
three integer values, each separated from the next by a space. Write a function that takes a
pointer to the file as its only parameter. The function must determine whether or not the entries
on every row of the file are in decreasing order. If all rows of data have entries in decreasing
order, the function must return TRUE otherwise it must return FALSE. Do not process more rows of
data than necessary. Assume that the file has already been opened for reading. Further assume that
TRUE and FALSE are symbolic constants defined with appropriate values.

    Sample file:                                 Sample file:
    3 2 1                                        3 2 1
    3 0 -2                                       3 0 -2
    5 3 3                                        5 3 4
    8 4 0                                        8 4 0

    Function produces TRUE as entires on         Function produces FALSE as at least one row (the
    every row are decreasing order.              3rd) does not have its entries in decreasing order.
*/

#include <stdio.h>
#define TRUE    1
#define FALSE   0
/*
 * Determines whether all the rows of a file have their entries
 * in decreasing order.
 *
 * Param: inFile   pointer to file that contains the integer values,
 *                 already opened for reading
 *
 * Returns: TRUE if the data on every row of the file is in
 *          decreasing order, FALSE otherwise.
 */
int allRowsDecreasing(FILE* inFile) {
    int num1, num2, num3;
    int allDecreasing = TRUE;
    while (allDecreasing && fscanf(inFile, "%d %d %d", &num1, &num2, &num3) == 3) {
        if (!(num1 >= num2 && num2 >= num3)) {
            allDecreasing = FALSE;
            // return 0;
        }
    }
    return allDecreasing;
    // return 1;

}
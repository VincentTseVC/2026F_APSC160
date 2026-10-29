/*

Write a function countZerosInCols that takes a two dimensional array of integers and the
number of rows in that array as parameters. The function takes a third parameter zerosInCol
that is a one dimensional array whose size matches the number of columns in the two
dimensional array. After a call to this function is made, zerosInCol[ i ] contains the
number of entries in the ith column of the two dimensional array that are zero.
We assume that NROWS and NCOLS are symbolic constants that have been defined to be the
number of rows and number of columns in the two dimensional array, respectively.

So, for example, suppose we declare the following arrays:

 int data[][NCOLS] = {
    {2, 4, 5, 1},
    {3, 0, 2, 1},
    {2, 4, 5, 1},
    {3, 0, 2, 7},
    {4, 3, 0, 6}};
 int zerosInCol[NCOLS];

and then make the function call:

 countZerosInCols( data, NROWS, zerosInCol );

After this call ends, zerosInCol will have the values 0, 2, 1, 0 . Note that there are no
zeros in the first column of data, 2 zeros in the second column, 1 in the third, etc.

Note: in the interests of time, it is not necessary to write any comment statements.
*/

#define NCOLS   100

/**
 * .........
 * Param: data          2D array of data
 * Param: nRows         number of rows of data
 * Param: zerosInCol    array that will contain the number of zeros
 *                      in each column of data by end the funtion call
*/
void countZerosInCols(int data[][NCOLS], int nRows, int zerosInCol[]) {
    for (int j = 0; j < NCOLS; j++) {
        int count = 0; // Reset to Zero fro every new col

        for (int i = 0; i < nRows; i++) {
            if (data[i][j] == 0) {
                count++;
            }
        }

        zerosInCol[j] = count;
    }
}
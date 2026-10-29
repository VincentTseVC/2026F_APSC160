/*
Input file:

a1 b1 c1
a2 b2 c2
a3 b3 c3
.
.
.
*/

// Display the average per row

#include <stdio.h>

#define FILE_NAME "example1.dat"

int main() {
    FILE *inFile;

    inFile = fopen(FILE_NAME, "r");
    if (!inFile) {
        printf("failed to open\n.");
        return 0;
    }
    double num1, num2, num3;
    double average;

    int row_num = 1;
    while (fscanf(inFile, "%lf %lf %lf", &num1, &num2, &num3) == 3) {
        average = (num1 + num2 + num3) / 3.0;
        printf("Row: %d, average is: %lf\n", row_num, average);
        row_num++;
    }

    fclose(inFile);
    return 0;
}
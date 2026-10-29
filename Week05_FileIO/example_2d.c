/*
Input file:

a1 b1 c1
a2 b2 c2
a3 b3 c3
.
.
.
*/

// Write the average per row into a new file called "output.dat"

#include <stdio.h>

#define IN_FILE_NAME "example1.dat"
#define OUT_FILE_NAME "output.dat"

int main() {
    FILE *inFile;
    FILE *outFile;

    inFile = fopen(IN_FILE_NAME, "r");
    if (inFile == NULL) {
        printf("failed to open\n.");
        return 0;
    }

    outFile = fopen(OUT_FILE_NAME, "w");
    if (outFile == NULL) {
        printf("Error: failed to open file\n.");
        return 0;
    }



    double num1, num2, num3;
    double average;

    int row_num = 1;
    while (fscanf(inFile, "%lf %lf %lf", &num1, &num2, &num3) == 3) {
        average = (num1 + num2 + num3) / 3.0;
        fprintf(outFile, "Row: %d, average is: %lf\n", row_num, average);
        row_num++;
    }

    fclose(inFile);
    fclose(outFile);
    return 0;
}
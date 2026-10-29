/*
Input file:

a1 b1 c1
a2 b2 c2
a3 b3 c3
.
.
.
*/

// Write the average of numm the numbers into a new file called "output.dat"

#include <stdio.h>

#define IN_FILE_NAME "example1.dat"

#define OUT_FILE_NAME "output.dat"

int main() {
    FILE *inFile;
    FILE *outFile;


    inFile = fopen(IN_FILE_NAME, "r");
    if (!inFile) {
        printf("failed to open\n.");
        return 0;
    }

    double num1, num2, num3;
    double sum = 0;
    int count = 0;
    double average;
    while (fscanf(inFile, "%lf %lf %lf", &num1, &num2, &num3) == 3) {
        sum += num1 + num2 + num3;
        count += 3;
    }

    fclose(inFile);

    if (count == 0) {
        average = 0.0;
    } else {
        average = sum / (double) count;
    }

    outFile = fopen(OUT_FILE_NAME, "w");
    if (outFile == NULL) {
        printf("Error: failed to open file\n.");
        return 0;
    }

    // printf("The average of all numbers: %lf\n", average);
    fprintf(outFile, "The average of all numbers: %lf\n", average);
    fclose(outFile);
    return 0;
}
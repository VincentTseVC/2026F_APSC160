/*
Input file:

a1 b1 c1
a2 b2 c2
a3 b3 c3
.
.
.
*/

// Display the average of all the numbers

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
    double sum = 0;
    int count = 0;
    double average;
    while (fscanf(inFile, "%lf %lf %lf", &num1, &num2, &num3) == 3) {
        sum += num1 + num2 + num3;
        count += 3;
    }

    if (count == 0) {
        average = 0.0;
    } else {
        average = sum / (double) count;
    }

    printf("The average of all numbers: %lf\n", average);

    fclose(inFile);
    return 0;
}
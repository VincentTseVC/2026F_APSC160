/*
Input file:

a1 b1 c1
a2 b2 c2
a3 b3 c3
.
.
.
*/

#include <stdio.h>

#define FILE_NAME "example1.dat"

int main() {
    FILE *inFile;

    inFile = fopen(FILE_NAME, "r");
    if (!inFile) {
        printf("failed to open\n.");
        return 0;
    }

    int num1, num2, num3;

    while (fscanf(inFile, "%d %d %d", &num1, &num2, &num3) == 3) {
        // ...
    }


    fclose(inFile);
    return 0;
}
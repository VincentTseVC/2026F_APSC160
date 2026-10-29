/*
Input file:
R
a1 b1 c1 d1
a2 b2 c2 d2
a3 b3 c3 d3
.
.
.
vincent sdfsdfs;kf
sdf
d
fsdf

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

    // int row;
    // printf("Enter how many rows you want to read: ");
    // scanf("%d", &row);

    int row;
    fscanf(inFile, "%d", &row);


    int num1, num2, num3, num4;

    int i = 1;
    while (i <= row) {
        fscanf(inFile, "%d %d %d %d", &num1, &num2, &num3, &num4);
        // ...
        i++;
    }


    fclose(inFile);
    return 0;
}
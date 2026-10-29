/*
Input file:

a b       c


d e
f
g
h i j
k
...
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

    int num;

    while (fscanf(inFile, "%d", &num) == 1) {
        // ...
    }

    fclose(inFile);
    return 0;
}
#include <stdio.h>

#define FILE_NAME "example1.dat"

int main() {
    FILE *inFile;

    inFile = fopen(FILE_NAME, "r");
    if (!inFile) {
        printf("failed to open\n.");
        return 0;
    }

    int a, b, c;
    int ok = 1; // true

    while (ok && fscanf(inFile, "%d %d %d", &a, &b, &c) == 3) {
        if (!(a > b && b > c))
            ok = 0;
    }

    fclose(inFile);

    if (ok) printf("TRUE\n");
    else    printf("FALSE\n");

    return 0;
}
/*
Input file:
C
a1 b1 c1 d1 e1 f1 g1 h1 i1 j1 k1
a2 b2 c2 d2 e2 f2 g2 h2 i2 j2 k2
a3 b3 c3 d3 e3 f3 g3 h3 i3 j3 k3
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

    // 這段代碼 可有可無 有時候 題目會直接跟你說 每行 有幾個數字
    // 可能已經是 #define 好的 constant
    int col;
    fscanf("%d", &col);

    int num;
    while (fscanf(inFile, "%d", &num) == 1) {

        int c = 0;                  // int c = 1;
        while (c < col - 1) {       // while (c < col) {
            fscanf(inFile, "%d", &num);
            // ...
            c++;
        }
    }


    fclose(inFile);
    return 0;
}
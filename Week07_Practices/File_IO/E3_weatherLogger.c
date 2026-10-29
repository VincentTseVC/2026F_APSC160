/*
Weather Logger – Hottest Day per City

A file temps.txt contains a 2D list of daily temperatures for 5 cities over 7 days (5 rows × 7 cols).

Example:
    21 25 23 22 26 27 24
    18 20 19 17 21 23 20
    30 28 29 31 33 35 32
    ...

Write:
    void maxEachCity(int temps[][7], int nRows, int hottest[]);

Function fills hottest[i] with the max temp of row i.
Then print results like:
    City 1 hottest: 27
    City 2 hottest: 23
    City 3 hottest: 35
    ...
*/

#include <stdio.h>
#define NCITIES     5
#define NDAYS       7
#define FILENAME    "temps.txt"

void maxEachCity(int temps[][NDAYS], int nRows, int hottest[]) {
    int maxTemp;
    for (int i = 0; i < nRows; i++) {
        // Reset the current max temp to the first number in each row
        maxTemp = temps[i][0];

        // start from the second number (j=1)
        for (int j = 1; j < NDAYS; j++) {
            if (temps[i][j] > maxTemp) {
                maxTemp = temps[i][j];
            }
        }

        hottest[i] = maxTemp;
    }
}

int main() {
    int temps[NCITIES][NDAYS];
    int hottest[NCITIES];

    FILE *fp;

    fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        printf("Error.");
    } else {
        /* 新方法！ */
        for (int i = 0; i < NCITIES; i++) {
            for (int j = 0; j < NDAYS; j++) {
                fscanf(fp, "%d", &temps[i][j]);
            }
        }
        fclose(fp);

        maxEachCity(temps, NCITIES, hottest);

        for (int i = 0; i < NCITIES; i++) {
            printf("City %d hottest: %d\n", i+1, hottest[i]);
        }


    }
    return 0;
}
/**
 * Ask the user to enter temperatures for 7 days and 4 different times per day
 * (morning, noon, evening, night).
 *
 * Store them in a 2D array temp[7][4].
 * Then print:
 *  - The average temperature per day, and
 *  - The overall weekly average.
 *
 */

/*
Input:
20 25 23 22
21 26 24 23
19 24 22 21
22 25 25 24
23 27 26 25
21 24 23 22
20 25 24 23

Output:
=== Daily Averages ===
Day 1 average: 22.50°C
Day 2 average: 23.50°C
Day 3 average: 21.50°C
Day 4 average: 24.00°C
Day 5 average: 25.25°C
Day 6 average: 22.50°C
Day 7 average: 23.00°C

Overall weekly average: 23.18°C
*/
#include <stdio.h>

#define DAYS    7
#define TIMES   4

int main() {
    double temp[DAYS][TIMES];

    for (int i = 0; i < DAYS; i++) {
        for (int j = 0; j < TIMES; j++) {
            // 如果題目是 要讀文件, 在外面先 fopen()
            // fscanf(inFile, "%d", &temp[i][j]);
            scanf("%d", &temp[i][j]);
        }
    }

    printf("=== Daily Averages ===\n");
    double daySum;
    double dayAvg;
    double weekSum = 0;
    double weekAvg;

    for (int i = 0; i < DAYS; i++) {
        daySum = 0; // reset to Zero for each new row (day)
        for (int j = 0; j < TIMES; j++) {
            daySum += temp[i][j];
        }

        dayAvg = daySum / (double) TIMES;
        printf("Day %d average: %.2f°C\n", i+1, dayAvg);
        weekSum += daySum;
    }

    printf("\n");

    weekAvg = weekSum / (double) (DAYS * TIMES);
    printf("Overall weekly average: %.2f°C\n", weekAvg);
    return 0;
}

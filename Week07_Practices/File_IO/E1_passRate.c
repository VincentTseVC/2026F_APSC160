/*
A file named grades.txt contains an unknown number of rows.
Each row has: <studentID> <mark> where mark is a number from 0–100.

Example:
    34512 78
    12997 55
    88231 92
    45322 48

Write a program that:
1. Reads the file
2. Counts how many students passed (≥ 50) and failed (< 50)
3. Calls a function printStats() to print:

Pass: xx.x%
Fail: xx.x%
*/
#include <stdio.h>

#define FILE_NAME       "grades.txt"
#define PASSING_GRADE   50


void printStats(int pass, int fail) {
    int total = pass + fail;
    double pPass = (total == 0) ? 0.0 : (100.0 * pass / (double) total);
    double pFail = 100.0 - pPass;
    printf("Pass: %.1lf\n", pPass);
    printf("Fail: %.1lf\n", pFail);
}

int main() {
    FILE *f;
    int studentID, mark;

    int pass = 0, fail = 0;

    f = fopen(FILE_NAME, "r");
    if (f == NULL) {
        printf("Error");
    } else {

        while (fscanf(f, "%d %d", &studentID, &mark) == 2) {
            if (mark >= PASSING_GRADE)
                pass++;
            else
                fail++;
        }
        fclose(f);
        printStats(pass, fail);

    }
}
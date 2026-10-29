#include <stdio.h>

#define IN_FILE_NAME        "example1.dat"
#define OUT_FILE_NAME       "output.dat"

#define MIDTERM_WEIGHT      0.3
#define FINAL_WEIGHT        0.5
#define PROJECT_WEIGHT      0.2

#define THRESHOLD_A         85
#define THRESHOLD_B         75
#define THRESHOLD_C         65
#define THRESHOLD_D         50


int main() {
    FILE *inFile;
    FILE *outFile;

    inFile = fopen(IN_FILE_NAME, "r");
    if (inFile == NULL) {
        printf("failed to open\n.");
        return 0;
    }

    outFile = fopen(OUT_FILE_NAME, "w");
    if (outFile == NULL) {
        printf("Error: failed to open file\n.");
        return 0;
    }

    int id;
    double midterm, final, project;
    double average;
    char letter;

    while (fscanf(inFile, "%d %lf %lf %lf", &id, &midterm, &final, &project) == 4) {
        average = (midterm  * MIDTERM_WEIGHT +
                   final    * FINAL_WEIGHT +
                   project  * PROJECT_WEIGHT);

        if      (average >= THRESHOLD_A) letter = 'A';
        else if (average >= THRESHOLD_B) letter = 'B';
        else if (average >= THRESHOLD_C) letter = 'C';
        else if (average >= THRESHOLD_D) letter = 'D';
        else                             letter = 'F';

        fprintf(outFile, "%d %.1lf %c", id, average, letter);

    }

    fclose(inFile);
    fclose(outFile);
    return 0;
}
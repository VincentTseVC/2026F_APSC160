/*
A quality control engineer must ensure that ball bearings manufactured by her company conform to the
advertised standards. She has a file called ballBearings.dat that contains information about a sample
of ball bearings. Each row of the file contains data about one ball bearing. Data is organized into
two columns of non-integer values separated by a space. The first column contains a diameter in mm and
the second a weight in grams. There is no other data in the file. The number of lines of data in the
file is not known but you can assume that there is at least one line of data.

A ball bearing is considered to be within accepted standards if (9.95 < diameter < 10.02), otherwise
it is rejected. We want to write a program that reads the file ballBearings.dat described above and
determines the percentage of ball bearings that meet accepted standards and the percentage that are
rejected. The program must display these percentages on the screen to 1 decimal place along with
appropriate labels.

The partially completed program appears below and on the following pages. To complete it you must
implement the functions: doQualityControl and printReport.

Carefully read through all of the provided code, including comment statements, before writing any code!

*/

#include <stdio.h>
#include <stdlib.h>

#define SOURCE     "ballBearings.dat"
#define MIN_DIAM   9.95
#define MAX_DIAM   10.02

void doQualityControl( FILE* );
void printReport( int, int );

int main( void ) {
    FILE* inFile;

    inFile = fopen( SOURCE, "r" );

    if ( inFile == NULL ) {
        printf( "Error opening input file, program terminating.\n" );
    }
    else {
        doQualityControl( inFile );
        fclose( inFile );
    }

    system( "PAUSE" );
    return 0;
}

/*
 * Performs quality control on ball bearing data.
 *
 * (Hint: calls printReport to print final report on screen)
 *
 * Param: inFile - points to file containing ball bearing data
 */
void doQualityControl( FILE* inFile ) {
    double diameter;
    double weight;

    int countAccept = 0;
    int countReject = 0;

    while (fscanf(inFile, "%lf %lf", &diameter, &weight) == 2) {
        if (diameter > MIN_DIAM && diameter < MAX_DIAM) {
            countAccept++;
        } else {
            countReject++;
        }
    }

    printReport(countAccept, countReject);
}

/*
 * Prints a report showing the percentage of ball bearings
 * that are accepted and rejected.
 *
 * Param: numAccept - number of ball bearings that are accepted
 * Param: numReject - number of ball bearings that are rejected
 */
void printReport( int numAccept, int numReject ) {
    int total = numAccept + numReject;
    printf("Percentage accepted: %.1lf\n", numAccept / (double) total);
    printf("Percentage rejected: %.1lf\n", numReject / (double) total);
}

#include <stdio.h>
#include <math.h>

#define PI acos (-1.0)

int main() {
    double x;
    double data;

    double dataMax = -2.0;
    double xAtMax;

    int nRows;
    int nCols;

    int row;
    int col;

    printf("Enter the number of rows in table: ");
    scanf("%d", &nRows);

    printf("Enter the number of cols in table: ");
    scanf("%d", &nCols);


    ////
    printf("x      \n");

    // while
    //      printf("sin(%dx)", col);
    ////


    row = 1;
    while (row <= nRows) {

        x = row * PI / nRows;
        printf("%4.3f", x);

        col = 1;
        while (col <= nCols) {
            data = sin(col * x);

            if (data > dataMax) {
                dataMax = data;
                xAtMax = x;
            }

            printf("%8.4f", data);
            col++;
        }

        printf("\n");
        row++;
    }

    printf("Maximum output value of %.4f\n", dataMax);
    printf("occurs at x = %.3f\n", xAtMax);

}
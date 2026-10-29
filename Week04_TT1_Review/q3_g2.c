#include <stdio.h>

#define MIN_NUM 1
#define MAX_NUM 16

int main(void) {

    int num;

    printf("Enter a number (1-16): ");
    scanf("%d", &num);

    /*

        num = 7

              *
             * *
            *   *
           *     *
          *       *
         *         *
        *************
    */
    int count;
    int spaces;
    int stars;
    int inside_spaces;
    int row = 1;

    while (row <= num) {

        // print spaces
        spaces = num - row;
        count = 0;
        while (count < spaces) {
            printf(" ");
            count++;
        }

        // first row
        if (row == 1) {
            printf("*");
        }

        // last row
        else if (row == num) {
            // print stars
            stars = 2 * row - 1;
            count = 0;
            while (count < stars) {
                printf("*");
                count++;
            }
        }

        // middle rows
        else {
            printf("*");

            inside_spaces = 2 * row - 3;
            count = 0;
            while (count < inside_spaces) {
                printf(" ");
                count++;
            }

            printf("*");
        }

        printf("\n");
        row++;
    }

    return 0;
}


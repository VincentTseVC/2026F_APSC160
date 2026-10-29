#include <stdio.h>

#define MIN_NUM 1
#define MAX_NUM 16

void printChar(int length, char letter) {
    int count = 0;
    while (count < length) {
        printf("%c", letter);
        count++;
    }
    // return ....
}




int main(void) {

    int num;

    printf("Enter a number (1-16): ");
    scanf("%d", &num);

    /*

        num = 4

           *
          ***
         *****
        *******

        第 1 行: 3 spaces  + 1 *
        第 2 行: 2 space   + 3 *
        第 3 行: 1 spaces  + 5 *
        第 4 行: 0 spaces  + 7 *
    */
    int count;
    // int spaces;
    // int stars;
    int row = 1;
    while (row <= num) {

        // print spaces
        // spaces = num - row;
        // count = 0;
        // while (count < num - row) {
        //     printf(" ");
        //     count++;
        // }
        printChar(num - row, ' ');

        // print stars
        // stars = 2 * row - 1;
        // count = 0;
        // while (count < 2 * row - 1) {
        //     printf("*");
        //     count++;
        // }
        printChar(2 * row - 1, '*');

        printf("\n");
        row++;
    }

    return 0;
}


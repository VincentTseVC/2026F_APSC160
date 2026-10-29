/**
 * 第 q4 題：數字沙漏
 *
 *
 * num = 4 時：
 * 1234321          *******
 *  23432            *****
 *   343              ***
 *    4                *
 *   343              ***
 *  23432            *****
 * 1234321          *******
 */

#include <stdio.h>
#define MIN_NUM 2
#define MAX_NUM 9

int main(void) {

    int num;

    printf("Enter a number (%d-%d): ", MIN_NUM, MAX_NUM);
    scanf("%d", &num);

    int value;
    int count;
    int start;
    int row = 1;
    while (row <= 2 * num - 1) {
        /* num = 4 時, start 依序是 1, 2, 3, 4, 3, 2, 1 */
        if (row <= num) {
            start = row;
        } else {
            start = 2 * num - row;
        }

        // print spaces
        count = 0;
        while (count < start - 1) {
            printf(" ");
            count++;
        }

        // print first increasing part
        value = start;
        while (value <= num) {
            printf("%d", value);
            value++;
        }

        // print the second decreasing part
        // 要從 num - 1 開始遞減, 避免重複印出 num
        value = num - 1;
        while (value >= start) {
            printf("%d", value);
            value--;
        }

        printf("\n");
        row++;
    }
    return 0;
}
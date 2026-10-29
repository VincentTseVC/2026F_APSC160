#include <stdio.h>


int main(void) {

    int n;

    int sum = 0;
    int count = 0;
    float avg;

    printf("Enter a positve integer or -1 to stop: ");
    scanf("%d", &n);

    while (n != -1) {

        if (n % 3 == 0) {
            sum += n;
            count += 1;
        }

        printf("Enter a positve integer or -1 to stop: ");
        scanf("%d", &n);
    }

    // printf("sum: %d\n", sum);
    // printf("count: %d\n", count);

    // 意味著 一個數字都沒有輸入 一開始就是輸入-1
    if (count == 0) {
        printf("FK you\n");
    } else {
        avg = sum / (float) count;
        printf("The average of all numbers is: %.2f\n", avg);
    }

    return 0;
}
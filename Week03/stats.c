#include <stdio.h>

int main(void) {

    int count = 0;
    int even_count = 0;
    int odd_count = 0;
    int total = 0;

    float average;
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int max = num;
    int min = num;

    while (num != -9999) {

        total += num;
        count++; // count += 1;

        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }

        if (num > max) {
            max = num;
        }

        if (num < min) {
            min = num;
        }

        printf("Enter a number: ");
        scanf("%d", &num);
    }

    if (count == 0) {
        printf("Error: no data.\n");
        average = 0.0;
    } else {
        average = total / (float) count;
    }

    printf("%d\n", total);
    printf(".2f\n", average);

    if (max == -9999) {
        printf("Error: no data.\n");
    } else {
        printf("%d %d\n", max, min);
    }

    printf("%d %d\n", even_count, odd_count);



    return 0;
}
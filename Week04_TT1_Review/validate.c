#include <stdio.h>


int main() {

    // version 1
    int num;
    printf("enter a positive number (-1 to stop): ");
    scanf("%d", &num);

    while (num != -1) {

        if (num < 0) {
            printf("Invalid.\n");
        } else {
            printf("num: %d\n", num);
        }

        printf("enter a positive number (-1 to stop): ");
        scanf("%d", &num);
    }

    // version 2
    int N;
    int i = 0;
    int num2;


    printf("enter N: ");
    scanf("%d", &N);

    while (i < N) {

        do {
            printf("enter a positive number: ");
            scanf("%d", &num);

            if (num < 0) {
                printf("Invalid.\n");
            }
        } while (num < 0);

        printf("num: %d\n", num);
        i++;
    }
}
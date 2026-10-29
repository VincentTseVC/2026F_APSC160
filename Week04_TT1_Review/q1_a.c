#include <stdio.h>

int main() {

    int num;
    int sum = 0;        // x
    int count = 0;      // y
    int checkNum;       // z (copy)


    printf("Enter a positiv, non-zero integer.\n");
    printf("-1 to end\n");
    scanf("%d", &num);

    while (num != -1) {
        if (num <= 0) {
            printf("ERROR: Numeric input is invalid.\n");
        } else {
            checkNum = num;

            while (checkNum % 2 == 0) {
                checkNum /= 2;
            }

            if (checkNum == 1) {
                sum += num;
                count++;
            }
        }

        printf("Enter a positiv, non-zero integer.\n");
        printf("-1 to end\n");
        scanf("%d", &num);
    }

    printf("%.2f\n", sum / (double) count);

}
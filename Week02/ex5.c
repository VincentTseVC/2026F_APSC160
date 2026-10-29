#include <stdio.h>
#include <stdbool.h>

// 題目 5：貸款審核系統 🏦
int main(void) {
    double income;
    int credit;
    int has_guarantor;

    printf("Enter monthly income: ");
    scanf("%lf", &income);

    printf("Enter credit score: ");
    scanf("%d", &credit);

    printf("Has guarantor? (1/0): ");
    scanf("%d", &has_guarantor);

    return 0;
}

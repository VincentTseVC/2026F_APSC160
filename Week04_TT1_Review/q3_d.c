#include <stdio.h>


int main() {

    int N;
    double x;
    int count = 1;

    double sum = 1.0;
    double power = 1.0;


    printf("Enter N: ");
    scanf("%d", &N);

    printf("Enter x: ");
    printf("%lf", &x);


    while (count <= N) {
        power *= x;
        sum += power;
        count++;
    }

    printf("Sum = %lf\n", sum);
}
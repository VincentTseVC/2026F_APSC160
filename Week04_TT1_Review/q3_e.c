#include <stdio.h>
#include <math.h>

int main(void) {

    double x;
    int n = 1;
    double term;
    double sum = 0.0;
    int count = 0;

    printf("enter value of x (0 < x < 2): ");
    scanf("%lf", &x);

    term = pow(-1, n + 1) * pow(x - 1, n) / (double) n;
    while (fabs(term) >= 0.000001) {

        sum += term;
        count++;

        n++;

        term = pow(-1, n + 1) * pow(x - 1, n) / (double) n;
    }

    // using do-while
    // do {
    //     term = pow(-1, n + 1) * pow(x - 1, n) / (double) n;
    //     sum += term;
    //     count++;
    //     n++;
    // } while (fabs(term) >= 0.000001);



    printf("Approximation to ln(%f) is %f\n", x, sum);
    printf("- computed using %d terms.\n", count);

    return 0;
}
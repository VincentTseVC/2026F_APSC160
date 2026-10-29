#include <stdio.h>

int main() {

    int largest;
    int smallest;

    int num1;
    int num2;

    printf("Please enter a sequence of pairs of positive integers.\n");
    printf("Terminiate. ....\n");

    scanf("%d %d", &num1, &num2);

    largest = num1;
    smallest = num2;

    while (num1 != -1 && num2 != -1) {
        if (num1 > largest)
            largest = num1;
        if (num2 < smallest)
            smallest = num2;
        scanf("%d %d", &num1, &num2);
    }

    printf("Max of first numbers: %d\n", largest);
    printf("Min of second numbers: %d\n", smallest);
    return 0;
}
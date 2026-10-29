#include <stdio.h>

int main() {

    int larger;     // num1
    int smaller;    // num2
    int temp;
    int difference; // x


    printf("Enter two integers\n");
    scanf("%d %d", &larger, &smaller);

    // make sure larger >= smaller
    if (larger < smaller) {
        temp = smaller;
        smaller = larger;
        larger = temp;
    }

    while (larger != smaller) {
        larger--;
        difference++;

        if (larger != smaller) {
            smaller++;
            difference++;
        }
    }

    printf("%d\n", difference);

    return 0;
}
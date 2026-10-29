#include <stdio.h>

int main(void) {

    int n;

    printf("Enter a positve integer or -1 to stop: ");
    scanf("%d", &n);

    while (n != -1) {
        // ...

        printf("Enter a positve integer or -1 to stop: ");
        scanf("%d", &n);
    }

    return 0;
}
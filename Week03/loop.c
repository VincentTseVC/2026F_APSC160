#include <stdio.h>


int main(void) {

    // int x = 0;
    // while (x < 10) {
    //     printf("I hate APSC160 %d\n", x);
    //     x += 3;
    // }

    // printf("I am Outside!\n");


    int n;
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        // if (i % 2 == 1) {
        //     printf("%d ", i);
        // }

        // i += 1;
        printf("%d ", i);
        i += 2;
    }
    printf("\n");
    return 0;
}
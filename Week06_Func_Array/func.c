#include <stdio.h>

int add(int x, int y) {
    // int result = x + y;
    // return result;
    return x + y;
}


int main() {

    int x = 5;

    printf("%d\n", add(10, 20));

    int res = add(x, 6);

    printf("%d\n", res + add(4, add(1, 2)));

}
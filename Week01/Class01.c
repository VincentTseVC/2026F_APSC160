#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("I am learning programming\n");
    printf("好好玩\n");

    printf("hello %d bye\n", 1 + 2);
    printf("%d\n", 2026);

    printf("%f\n", 3.14159);
    printf("%.2f\n", 3.14159);

    printf("%d\n", 5 / 2); // integer division (商數)
    printf("%f\n", 5 / 2.0);
    printf("%f\n", 5 / (float) 2);

    printf("%f\n", (float) (5 / 2));

    printf("%d\n", 14 % 4); // 14 / 4 = 3 ... 2

    printf("%c\n", 'A');
    printf("%d\n", 'A');
    printf("%c\n", 99);

    printf("%c\n", (int) 'A');
    printf("%d\n", (char) 97);

    printf("%f\n", sqrt(16));
    printf("%f\n", floor(1.999));
    printf("%f\n", ceil(2.0001));

    char name[32] = "Alice";
    int age = 3;

    printf("大家好, 我叫 %s\n", name);
    printf("%s 今年 %d歲\n", name, age);
    printf("Oh no~ %s 可能只能再活%d年\n", name, 100 - age);

    int x = 'B';
    char y = 98;
    printf("%d %c\n", x, y);
    printf("%d\n", 'a' + 3);
    printf("%c\n", 'a' + 3);

    int n;
    printf("%p\n", &n);

    scanf("abc%dxyz", &n);

    printf("you entered: %d\n", n);

    printf("%d\n", 5 > 2); // true

    printf("%d\n", false);

    return 0; // susccess
}





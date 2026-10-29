#include <stdio.h>
#include <string.h>

int main() {
    int a = 1;
    int b = 2;

    //     index ->    0  1  2  3   4  5  6  7  8  9
    int numbers[10] = {2, 5, 8, 1};
    int len = 4;

    // position (index) 從 0 開始

    // printf("%d\n", numbers[0]); // 2
    // printf("%d\n", numbers[1]); // 5
    // printf("%d\n", numbers[2]); // 8
    // printf("%d\n", numbers[3]); // 1
    // printf("%d\n", numbers[4]); // ? (選擇題: I dont Know)
    // printf("%d\n", numbers[5]); // ? (選擇題: I dont Know)

    // printf("%d\n", numbers[9]); // ? (選擇題: I dont Know)
    // printf("%d\n", numbers[10]); // 4 (int len 的 value) 考試不會考


    int i = 0; // a
    while (i < len) { // b
        printf("%d\n", numbers[i]);
        i++; // c
    }


    // for (a; b; c)
    for (int i = 0; i < len; i++) {
        printf("%d\n", numbers[i]);
    }

    //               01234
    char name[10] = "apple"; // ['a', 'p', 'p', 'l', 'e', '\0', '?', '?', '?', '?']

    printf("%s\n", name); // 尋找 第一個 \0, 然後把前面得字母 打印出來

    name[5] = '!';
    printf("%s\n", name); // 有可能是 apple!, 有可能是 apple!?????????????????????????????????.....
    name[8] = '\0';
    printf("%s\n", name); // 有可能是 apple!, 有可能 apple!?, 有可能 apple!??

    // printf("%c\n", name); // Error
    // printf("%s\n", 'V'); // Error
    printf("%c\n", 'V');



    for (int i = 0; i < strlen(name); i++) {
        printf("%c", name[i]);
    }
    printf("\n");

    // 假設學校考試 不讓你 #include <string.h>

    for (int i = 0; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
    printf("\n");


    // Term Test 2 佔比最大的知識點

    int M[10][10] = {
            {1, 2, 3, 4, 5},    // i=0
            {9, 8, 7, 6, 5},    // i=1
            {1, 3, 5, 2, 4}     // i=2
    // j =   0  1  2  3  4
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

}
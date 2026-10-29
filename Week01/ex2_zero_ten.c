#include <stdio.h>
#include <math.h>


int main() {
    // Example 2:
    // 三位数字重组
    // 输入任意的3位数字，返回一个新的数字，把之前的数字的十位数字变成0 (至少5种不同写法)

    // Example:
    // n = 257 -> 207
    // n = 123 -> 103 

    int n;
    printf("请输入3位数字: ");
    scanf("%d", &n); // 100 - 999

    // 方法 1
    int digit = n % 10;
    int hundreds = n / 100;
    int result = hundreds * 100 + digit;

    printf("答案是: %d\n", result);

    // 方法2
    int result2 = n - (((n / 10) % 10) * 10);
    printf("答案是: %d\n", result2);

}


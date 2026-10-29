#include <stdio.h>
#include <math.h>

// you have two functions exist to find the maximum and minimum of two values.
int max(int a, int b) { return (a > b) ? a : b; }
int min(int a, int b) { return (a < b) ? a : b; }


int main() {
    // Example 1:
    // 寻找中间数
    // 给你三个数字，返回中间的那一个 (至少10种不同写法)

    int x, y, z;
    printf("请输入3个数字 分别用刚好一个空格 隔开: ");
    scanf("%d %d %d", &x, &y, &z);

    // 方法 1
    int total = x + y + z;
    int M = max(max(x, y), z);
    int m = min(min(x, y), z);
    int median = total - M - m;
    printf("中间数 median 是: %d\n", median);

    // 方法 2
    int median2 = max(max(min(x, y),
                          min(y, z)),
                      min(x, z));
    printf("中间数 median 是: %d\n", median2);
}



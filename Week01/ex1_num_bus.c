#include <stdio.h>
#include <math.h>

// you have two functions exist to find the maximum and minimum of two values.
int max(int a, int b) { return (a > b) ? a : b; }
int min(int a, int b) { return (a < b) ? a : b; }


int main() {
    // Example 1:
    // 幼兒園春遊問題
    // 参数代表人数, 计算这个人数需要多少辆车, 一辆车可以坐40人

    int n;

    printf("请输入人数: ");
    scanf("%d", &n);

    // 方法 1
    int num_bus1 = ceil(n / 40.0);

    // 方法 2
    int num_bus2 = n / 40 + min(1, n % 40);

    // 方法 3
    int num_bus3 = (n + 39) / 40;

    // 方法 4
    int num_bus4 = ((n - 1) / 40) + 1;

    printf("一共有 %d 个小朋友\n", n);
    printf("方法1 需要: %d 辆车\n", num_bus1);
    printf("方法2 需要: %d 辆车\n", num_bus2);
    printf("方法3 需要: %d 辆车\n", num_bus3);
    printf("方法4 需要: %d 辆车\n", num_bus4);
}


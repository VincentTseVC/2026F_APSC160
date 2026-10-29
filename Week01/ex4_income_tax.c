#include <stdio.h>
#include <math.h>

// you have two functions exist to find the maximum and minimum of two values.
int max(int a, int b) { return (a > b) ? a : b; }
int min(int a, int b) { return (a < b) ? a : b; }


int main() {
    // Example 1:
    // 加拿大人所得稅
    // 给你的收入,计算个人所得税，前20,000块是15%的税，超过20,000的部分都是25%的税
    // (当然, 实际计算方式 复杂很多)


    int income;
    printf("请输入你的年薪: ");
    scanf("%d", &income);

    float tax = min(income, 20000) * 0.15 + max(0, (income - 20000)) * 0.25;
    printf("你需要缴 $%.2f 的税\n", tax);
}


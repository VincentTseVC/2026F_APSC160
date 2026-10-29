#include <stdio.h>
#include <stdbool.h>

// 題目 2：稅額計算 💰
int main(void) {
    int salary;
    int is_senior, is_disabled;

    printf("Enter annual income: ");
    scanf("%d", &salary);

    printf("Senior? (1/0): ");
    scanf("%d", &is_senior);

    printf("Disabled? (1/0): ");
    scanf("%d", &is_disabled);

    float rate, tax;
    if (salary <= 10000)        rate = 0.0;
    else if (salary <= 40000)   rate = 10.0;
    else if (salary <= 80000)   rate = 20.0;
    else                        rate = 30.0;

    if (is_disabled)            // 稅率 -5%
        rate -= 0.05;

    if (rate < 0.0)             // 保底
        rate = 0.0;

    tax = salary * rate;
    if (is_senior) {
        tax -= 2000.0;
        if (tax < 0.0)              // 保底
            tax = 0.0;
    }

    printf("You need to pay: $.2%f taxes\n", tax);

    return 0;
}

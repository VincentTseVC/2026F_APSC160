#include <stdio.h>
#include <stdbool.h>

// 題目 3：運動員資格判斷 🏃
int main(void) {
    int age;
    double bmi;
    int has_med, is_pro;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter BMI: ");
    scanf("%lf", &bmi);

    printf("Has medical certificate? (1/0): ");
    scanf("%d", &has_med);

    printf("Professional athlete? (1/0): ");
    scanf("%d", &is_pro);


    // bool age_ok, bmi_ok;

    // if (is_pro) {
    //     age_ok = age >= 16;
    // } else {
    //     age_ok = age >= 18;
    // }

    // if (has_med) {
    //     bmi_ok = true;
    // } else {
    //     bmi_ok = bmi < 30;
    // }

    // if (age_ok && bmi_ok) {
    //     printf("Eligible\n");
    // } else {
    //     printf("Not eligible\n");
    // }

    // 學校不會教, 考試不用考, 但是你一定要知道
    /*
        int a = 10;
        int b;
        if (a > 10) {
            b = 100;
        } else {
            b = 200;
        }

        int a = 10;
        int b = (a > 10) ? 100 : 200;

    */

    bool age_ok = (is_pro) ? age >= 16 : age >= 18;
    bool bmi_ok = (has_med) ? true : bmi < 30;

    // printf((age_ok && bmi_ok) ? "Eligible\n" : "Not eligible\n");
    printf("You are %s to join the game\n",
           (age_ok && bmi_ok) ? "eligible" : "Not eligible");

    return 0;
}

#include <stdio.h>

// 題目 1：票價計算器 🎫
int main(void) {
    int age;
    int is_student, is_weekend;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Is student? (1/0): ");
    scanf("%d", &is_student);

    printf("Is weekend? (1/0): ");
    scanf("%d", &is_weekend);

    float ticket_price;

    if (age < 6) {
        ticket_price = 0;
    } else if (age <= 18) {
        ticket_price = 8;
    } else if (age <= 64) {
        ticket_price = 12;
    } else {
        ticket_price = 6;
    }

    if (is_student) ticket_price *= 0.8;
    // else if (is_weekend) ticket_price += 2;
    if (!is_student && is_weekend) ticket_price += 2;


    printf("Ticket price: $.2%f", ticket_price);

    return 0;
}

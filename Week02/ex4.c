#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// 題目 4：遊樂園票價 🎢
int main() {
    int height;
    int is_vip, is_holiday;

    printf("Enter height (cm): ");
    scanf("%d", &height);

    printf("VIP? (1/0): ");
    scanf("%d", &is_vip);

    printf("Holiday? (1/0): ");
    scanf("%d", &is_holiday);

    if (height > 200) {
        printf("Entry forbidden\n");
        return 0; // Stop running and terminate the program
    }

    float price = 100.0;

    if (is_vip) {
        price = 0.0;
    } else {
        if (height < 120) price *= 0.5;
        if (is_holiday)   price *= 1.2;
    }

    printf("Ticket price: %.2f\n", price);

    return 0;
}

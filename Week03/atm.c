#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int choice;
    double balance = 1000.0; // 初始金額
    double amount;

    bool keep_going = true;

    while (keep_going) {

        printf("\n==== ATM Menu ====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Balance\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter deposit amount: ");
            scanf("%lf", &amount);
            if (amount > 0) {
                balance += amount;
                printf("Deposit 成功, New Balance: $%.2lf\n", balance);
            } else {
                printf("Invalid deposit amount.\n");
            }

        } else if (choice == 2) {
            printf("Enter withdaw amount: ");
            scanf("%lf", &amount);
            if (amount > balance) {
                printf("Insufficient Funds!\n");
            } else if (amount <= 0) {
                printf("Invalid deposit amount.\n");
            } else {
                balance -= amount;
                printf("Withdaw 成功, New Balance: $%.2lf\n", balance);
            }
        } else if (choice == 3) {
            printf("Current balance: %.2lf\n", balance);
        } else if (choice == 4) {
            printf("滾蛋吧！\n");
            keep_going = false;
        } else {
            printf("Invalid Choice.\n");
        }
    }
    return 0;
}
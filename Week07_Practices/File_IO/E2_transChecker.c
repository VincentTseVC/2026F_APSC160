/*
Bank Transaction Checker

A file named transactions.dat has unknown rows, each with 3 values:
<old balance> <withdraw amount> <new balance>

Example:
    800 50 750
    1200 100 1100
    600 300 400   ← incorrect (600 – 300 ≠ 400)

Write a function:
    int allTransactionsValid(FILE* fp);

Return TRUE only if every row is valid: oldBalance - withdraw == newBalance
Stop early if any row is invalid.
*/

#include <stdio.h>
// 我們用回教授的方法
#define TRUE    1
#define FALSE   0
int allTransactionsValid(FILE* fp) {
    int allValid = TRUE;
    int oldBal, withdraw, newBal;

    while (allValid && fscanf(fp, "%d %d %d", &oldBal, &withdraw, &newBal)) {
        if (oldBal - withdraw != newBal) {
            allValid = FALSE;
        }
    }
    return allValid; // True or False
}

// 假設 題目有 part b)
// Write a main function to read a file called "transection.dat"
// and use the function to display appropriate messages

#define FILENAME "transection.dat"
int main() {
    FILE *inFile;

    inFile = fopen(FILENAME, "r");
    if (inFile == NULL) {
        print("Error.");
    } else {
        if (allTransactionsValid(inFile)) {
            printf("All transection are valid.\n");
        } else {
            printf("One of the transection is Invalid.\n");
        }

        fclose(inFile);
    }
    return 0;
}
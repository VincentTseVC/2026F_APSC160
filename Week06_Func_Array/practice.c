#include <stdio.h>

/**
 * Return True iff A contains at least one even integer. False, otherwise.
*/
// 題目關鍵字: Has / Contains / At least
int containsEven(int A[], int n) {
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) { // find correct example
            return 1; // true
        }
        // else {
        //     return 0
        // }
    }
    return 0; // false
}

// 這是 2025F, 教授的寫法: 不能在for 裡面寫 return
#define TRUE 1
#define FALSE 0
// #include <stdbool.h>
int containsEven(int A[], int n) {
    int hasEven = FALSE; // 一開始先默認 你沒有
    int i = 0;
    while (!hasEven && i < n) {
        if (A[i] % 2 == 0) {
            hasEven = TRUE;
        }
        i++;
    }
    return hasEven;
}



/**
 * Return True iff every number in A is positive. False otherwise.
*/
// 題目關鍵字: All / Every / None of / No ...
int allPositive(int A[], int n) {
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) { // find counter example
            return 0; // false
        }
    }
    return 1; // true
}

#define TRUE 1
#define FALSE 0
int allPositive(int A[], int n) {
    int allPos = TRUE;
    int i = 0;
    while (allPos && i < n) {
        if (A[i] < 0) {
            allPos = FALSE;
        }
        i++;
    }
    return allPos;
}

int allPositive(int A[], int n) {
    int allPos = TRUE;
    for (int i = 0; allPos && i < n; i++) {
        if (A[i] < 0) {
            allPos = FALSE;
        }
    }
    return allPos;
}



#include <string.h>
/**
 * Return True if phone is a valid phone number. In our purpose,
 * a valid phone number is a string at least 8 letters and only contains
 * numbers, spaces (' '), and dashes ('-').
*/
int isValidPhoneNumber(char phone[]) {
    if (strlen(phone) < 8) return 0;

    for (int i = 0; i < strlen(phone); i++) {
        if (!((phone[i] >= '0' && phone[i] <= '9') || phone[i] == ' ' || phone[i] == '-')) {
            return 0;
        }
    }
    return 1;
}

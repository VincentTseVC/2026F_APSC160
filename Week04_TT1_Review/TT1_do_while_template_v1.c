#include <stdio.h>

#define SENIOR_AGE 65
#define AGE_LIMIT 100
#define SENTINEL -1


/**
 * Prompt the user to enter people's age until -1 is entered.
 * Display the following:
 *  1) the number of senior people (age >= 65)
 *  2) the average age of all people
 *  3) the oldest and youngest age
 *  4) if people older than 100 exist?
 * If no data in entered, display the message "Error: no data."
*/
int main() {

    int age;
    int senior_count = 0;

    int sum = 0;
    int count = 0;
    double avg;

    int oldest;
    int youngest;

    int over_100 = 0; // false

    do {
        printf("Enter age (-1 to stop): ");
        scanf("%d", &age);

        if (age != SENTINEL) {
            // validate
            if (age < 0) {
                printf("Invalid age. Please enter a positive age.\n");
            } else {

                // first valid age (是第一次得到一個對的age)
                if (count == 0) {
                    // 初始化 oldest 和 youngest 等於 第一個輸入的 age
                    oldest = age;
                    youngest = age;
                }

                if (age >= SENIOR_AGE) {
                    senior_count++;
                }

                if (age >= AGE_LIMIT) {
                    over_100 = 1; // true
                }

                if (age < youngest) {
                    youngest = age;
                }

                if (age > oldest) {
                    oldest = age;
                }

                sum += age;
                count++;    // count += 1;
            }
        }
    } while (age != SENTINEL);

    if (count == 0) {
        printf("Error: no data entered!\n");
    } else {
        avg = sum / (double) count;
        printf("1) The number of senior people: %d\n", senior_count);
        printf("2) The average age of all people are: %.2f\n", avg);

        printf("3) The oldest and youngest age are %d and %d\n", oldest, youngest);

        if (over_100) {
            printf("4) Yes, there are people older than 100.\n");
        } else {
            printf("4) No, no people are older than 100.\n");
        }
    }

    return 0;
}




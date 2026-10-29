#include <stdio.h>

#define MIN_AGE 1
#define MAX_AGE 125

#define CHILD_AGE 18
#define SENIOR_AGE 65

#define CHILD_COST 13.45
#define ADULT_COST 21.95
#define SENIOR_COST 18.95

int main() {

    int age;
    double cost;

    // using while.
    printf("Enter your age: ");
    scanf("%d", &age);

    while (age < MIN_AGE || age > MAX_AGE) {
        printf("Error: invalid age.\n");

        printf("Enter your age: ");
        scanf("%d", &age);
    };

    // using do-while
    // do {
    //     printf("Enter your age: ");
    //     scanf("%d", &age);
    //     if (age < MIN_AGE || age > MAX_AGE) {
    //         printf("Error: invalid age.\n");
    //     }
    // } while (age < MIN_AGE || age > MAX_AGE);




    // Determine ticket cost.
    if (age < CHILD_AGE) {
        cost = CHILD_COST;
    } else if (age < SENIOR_AGE) {
        cost = ADULT_COST;
    } else {
        cost = SENIOR_COST;
    }

    printf("Cost of ticket: %.2f\n", cost);

    return 0;
}
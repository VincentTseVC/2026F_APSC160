#include <stdio.h>

#define MAX_CAPACITY 500.0
#define INITIAL_LEVEL 200.0
#define EMPTY_TANK 0.0

#define LOW_LEVEL 100.0
#define HIGH_LEVEL 400.0

// 可寫可不寫
#define LOW "LOW"
#define NORMAL "NORMAL"
#define HIGH "HIGH"

#define SENTINEL 0.0

int main(void) {

    double flow;
    double level = INITIAL_LEVEL;

    double highest = INITIAL_LEVEL;
    double lowest = INITIAL_LEVEL;

    int overflow_count = 0;
    int empty_count = 0;

    // this is optional
    printf("Initial water level: %.2f L\n", level);

    printf("Enter flow (0 to stop): ");
    scanf("%lf", &flow);

    while (flow != SENTINEL) {

        level += flow;      // could be positive or negative

        // check overflow
        if (level > MAX_CAPACITY) {
            printf("Overflow prevented\n");
            level = MAX_CAPACITY;
            overflow_count++;
        }

        // check empty tank
        else if (level < EMPTY_TANK) {
            printf("Tank empty\n");
            level = EMPTY_TANK;
            empty_count++;
        }

        // classification
        if (level < LOW_LEVEL) {
            printf("LOW\n");
        } else if (level < HIGH_LEVEL) {
            printf("NORMAL\n");
        } else {
            printf("HIGH\n");
        }

        // update highest
        if (level > highest) {
            highest = level;
        }

        // update lowest
        if (level < lowest) {
            lowest = level;
        }

        // this is optional
        printf("Current level: %.2f L\n", level);

        printf("Enter flow (0 to stop): ");
        scanf("%lf", &flow);
    }

    printf("Final water level: %.2f L\n", level);
    printf("Highest water level reached: %.2f L\n", highest);
    printf("Lowest water level reached: %.2f L\n", lowest);
    prinf("Number of overflow events: %2.f L\n", overflow_count);
    prinf("Number of empty-tank events: %2.f L\n", empty_count);

    return 0;
}
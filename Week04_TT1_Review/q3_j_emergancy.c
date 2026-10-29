#include <stdio.h>

#define SENTINEL -999.0

#define MIN_TEMP -50.0
#define MAX_TEMP 150.0

#define NORMAL_TEMP 20.0
#define HOT_TEMP 80.0
#define CRITICAL 120.0

#define SHOTDOWN_COUNT 3

int main(void) {

    double temp;
    double fahrenheit;

    int emergency = 0; // false
    int consecutive_critical = 0;

    int valid_count = 0;
    int invalid_count = 0;

    double highest;     // 方法1: highest = MIN_TEMP;
    double lowest;      //       lowest = MAX_TEMP;

    double total = 0.0;
    double average;

    int hot_count = 0;
    int critical_count = 0;



    printf("Enter temperature (%d to stop): ", SENTINEL);
    scanf("%lf", temp);

    while (temp != SENTINEL && !emergency) { // emergency == 0;

        // validate input temperature
        if (temp < MIN_TEMP || temp > MAX_TEMP) {
            printf("Error: invalid temperature.\n");
            invalid_count++;
        } else {

            // Fahrenheit formula
            fahrenheit = temp * 9.0 / 5.0 + 32;

            printf("Fahrenheit: %.2f\n", fahrenheit);

            // 方法2: first valid temperautre (去初始化 highest & lowest)
            if (valid_count == 0) {
                highest = temp;
                lowest = temp;
            }

            total += temp;
            valid_count++;

            // update highest
            if (temp > highest) {
                highest = temp;
            }

            // update lowest
            if (temp < lowest) {
                lowest = temp;
            }

            // classification
            if (temp < NORMAL_TEMP) {
                printf("COLD\n");
                consecutive_critical = 0; // 中斷了 連續發生 temp >= 120 的 Critical event
            } else if (temp < HOT_TEMP) {
                printf("NORMAL\n");
                consecutive_critical = 0; // 中斷了 連續發生 temp >= 120 的 Critical event
            } else if (temp < CRITICAL) {
                printf("HOT\n");
                hot_count++;
                consecutive_critical = 0; // 中斷了 連續發生 temp >= 120 的 Critical event
            } else {
                printf("CRITICAL\n");
                critical_count++;
                consecutive_critical++;

                if (consecutive_critical == SHOTDOWN_COUNT) {
                    printf("EMERGENCY SHOTDOWN\n");
                    emergency = 1; // true -> this will stop the while loop
                }
            }
        }

        // Only ask again if no emergency
        if (emergency == 0) {
            printf("Enter temperature (%d to stop): ", SENTINEL);
            scanf("%lf", temp);
        }
    }

    // Final results
    if (valid_count == 0) {
        printf("Error: no valid data entered!\n");
    } else {
        average = total / (double) valid_count;

        printf("Number of valid readings: %d\n", valid_count);
        printf("Number of invalid readings: %d\n", invalid_count);
        printf("Averasge temperature: %.2f\n", average);
        printf("Highest temperature: %.2f\n", highest);
        printf("Lowest temperature: %.2f\n", lowest);
        printf("Number of HOT readings: %d\n", hot_count);
        printf("Number of CRITICAL readings: %d\n", critical_count);

        if (emergency) { // empergency == 1 (true)
            printf("Emergency shotdown: YES\n");
        } else {
            printf("Emergency shotdown: NO\n");
        }
    }

    return 0;
}
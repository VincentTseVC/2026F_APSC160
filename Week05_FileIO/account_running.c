/* In-file

acc1 1000 1
acc1 500 1
acc1 700 -1
acc2
acc2
acc3
acc3

*/

/* Out-file
acc#    dep     with    bal
acc1    1500    700     800
acc2
acc3
..
..
*/

#include <stdio.h>

#define IN_FILE_NAME        "example1.dat"
#define OUT_FILE_NAME       "output.dat"

int main() {
    FILE *inFile;
    FILE *outFile;

    inFile = fopen(IN_FILE_NAME, "r");
    if (inFile == NULL) {
        printf("failed to open\n.");
        return 0;
    }

    outFile = fopen(OUT_FILE_NAME, "w");
    if (outFile == NULL) {
        printf("Error: failed to open file\n.");
        return 0;
    }

    fprintf(outFile, "Account#\tDeposit\tWithdraw\tBalance\n");

    int id, type, curr_id, first_time = 1; // true
    double amt, dep = 0.0, wdr = 0.0;

    while (fscanf(inFile, "%d %lf %d", &id, &amt, &type) == 3) {

        if (first_time) {
            curr_id = id;
            first_time = 0; // false
        }

        // if we encounter a new account ID different from the previous (current) one
        // 意味著, 下一個 (新的) account 的 transection 開始了, 記錄上一個人的summary
        if (id != curr_id) {
            fprintf(outFile, "%d %.2lf %.2lf %.2lf\n",
                    curr_id, dep, wdr, dep - wdr);
            curr_id = id;
            dep = 0.0;
            wdr = 0.0;
        }


        if (type == 1) dep += amt;
        else           wdr += amt;
    }

    // 手動加入 最後一個account 的 summary
    if (!first_time) { // <---- make sure the file is not empty at the first place
        fprintf(outFile, "%d %.2lf %.2lf %.2lf\n",
                curr_id, dep, wdr, dep - wdr);
    }


    fclose(inFile);
    fclose(outFile);
    return 0;
}
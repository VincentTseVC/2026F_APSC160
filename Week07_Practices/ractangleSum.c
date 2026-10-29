/*
Enter rows and columns: 3 4
Enter the 3x4 matrix:
1 2 3 4
5 6 7 8
9 10 11 12
Enter number of queries: 3
Enter each query as: r1 c1 r2 c2 (0-based inclusive)
0 0 1 1
1 1 2 3
0 2 2 3
Sum = 14
Sum = 54
Sum = 45
*/

#include <stdio.h>

// 假設這是題目給的
#define MAXR 200
#define MAXC 200

int rectSum(int M[MAXR][MAXC], int r1, int c1, int r2, int c2) {
    int sum = 0;
    for (int i = r1; i <= r2; i++) {
        for (int j = c1; j <= c2; j++) {
            sum += M[i][j];
        }
    }
    return sum;
}

int main() {

    // Create a RxC Matrix
    int M[MAXR][MAXC];

    // read matrix size
    int R, C;
    printf("Enter rows and columns: ");

    // Error checking ..
    if (scanf("%d %d", &R, &C) != 2) return 1;
    if (R < 1 || C < 1 || R > MAXR || C > MAXC) return 1;

    // read matrix
    printf("Eeter the %dx%d matrix:\n", R, C);
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    // read the number of queries
    int Q;
    printf("Enter number of queries: ");
    if (scanf("%d", &Q) != 1) return 1;


    int sums[Q];
    printf("Enter each query as: r1 c1 r2 c2 (0-base inclusive)\n");
    int r1, c1, r2, c2;
    for (int q = 0; q < Q; q++) {
        if (scanf("%d %d %d %d", &r1, &c1, &r2, &c2) != 4) return 1;
        // make sure its within the matrix range
        if (!(r1 < 0 || c1 < 0 || r2 >= R || c2 >= C)) {
            sums[q] = rectSum(M, r1, c1, r2, c2);
        }
    }

    for (int q = 0; q < Q; q++) {
        printf("Sum = %d\n", sums[q]);
    }




}


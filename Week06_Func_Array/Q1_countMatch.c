/*
Write a function named count_matching_paris which takes in 2 arrays with the same length N,
and return how many adjancent number pairs match between them at the same positions.

For example:
 int A[6] = {1, 2, 3, 4, 5, 6};
 int B[6] = {1, 2, 3, 9, 5, 6};
 count_matching_pairs(A, B, 6) -> 3

This is because
 A: {1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}
 B: {1, 2}, {2, 3}, {3, 9}, {9, 5}, {5, 6}
 ->  (+1)    (+1)    (+0)    (+0)    (+1)  => 3
*/

/**
 * 套路: Adjancent
 *  for (int i = 0; i < n - 1; i++) {
 *      ... arr[i] ... arr[i + 1] ...
 *  }
 *
 * 套路: 同時比對 不同 arr, 在相同位置 (position)
 *  for (int i = 0; i < n; i++) {
 *      ... arrA[i] .... arrB[i] ....
 *  }
*/
int count_matching_pairs(int A[], int B[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (A[i] == B[i] && A[i+1] == B[i+1]) {
            count++;
        }
    }
    return count;
}
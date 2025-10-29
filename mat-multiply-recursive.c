#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000
int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

void multiplyRecursive(int n, int i, int j, int k) {
    if (i >= n) return;

    if (j >= n) {
        multiplyRecursive(n, i+1, 0, 0);
        return;
    }

    if (k == 0) C[i][j] = 0; 

    if (k < n) {
        C[i][j] += A[i][k] * B[k][j];
        multiplyRecursive(n, i, j, k + 1);
    } else {
        multiplyRecursive(n, i, j + 1, 0);
    }
}

int main() {
    srand(time(NULL));
    int sizes[] = {10,20,50}; 
    int num_sizes = sizeof(sizes) / sizeof(sizes[0]);

    for (int s = 0; s < num_sizes; s++) {
        int n = sizes[s];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                A[i][j] = rand() % 10;
                B[i][j] = rand() % 10;
                C[i][j] = 0;
            }
        }
        clock_t start = clock();
        multiplyRecursive(n, 0, 0, 0);
        clock_t end = clock();
        double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Matrix size %dx%d -> Time: %f seconds\n", n, n, time_taken);
    }
    return 0;
}

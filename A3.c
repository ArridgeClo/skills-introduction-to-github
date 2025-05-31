#include <stdio.h>

int main(){
    int M = 0;
    int N = 0;
    printf("Enter the value of M and N: ");
    if (scanf("%d %d", &M, &N) != 2) {
        printf("Error: Please enter two integers.\n");
        return 1;
    }

    if (M <= 0 || N <= 0) {
        printf("Error: M and N must be positive integers.\n");
        return 1;
    }

    int matrix[M][N];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = 0;
        }
    }

    printf("The matrix is:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

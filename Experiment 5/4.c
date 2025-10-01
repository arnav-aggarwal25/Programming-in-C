#include <stdio.h>
void readMatrix(int matrix[][10], int rows, int cols, char name) {
    printf("Enter elements of matrix %c (%d x %d) in row-major order:\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][10], int rows, int cols, char name) {
    printf("\nMatrix %c:\n", name);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q;

    printf("Enter the number of rows and columns for Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of rows and columns for Matrix B (p q): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("\nError: Matrix multiplication is not possible. The number of columns in Matrix A must be equal to the number of rows in Matrix B.\n");
        return 1; 
    }

    readMatrix(A, m, n, 'A');
    readMatrix(B, p, q, 'B');

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printMatrix(A, m, n, 'A');
    printMatrix(B, p, q, 'B');

    printMatrix(C, m, q, 'C');

    return 0; 
}

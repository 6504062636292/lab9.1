#include <stdio.h>
#define NMAX 10

void inputArray(int array[], int n);
void showArray2D(int matrix[][10], int n);
void constructMatrix(int p[][10], int n, int a[], int b[]);

int main() {
    int a[NMAX], b[NMAX], p[NMAX][NMAX], n;
    
    printf("Enter N = ");
    scanf("%d", &n);
    
    printf("Input array A \n");
    inputArray(a, n);
    
    printf("Input array B \n");
    inputArray(b, n);
    
    constructMatrix(p, n, a, b);
    
    printf("Matrix P \n");
    showArray2D(p, n);
    
    return 0;
}

void inputArray(int array[], int n) {
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
}

void constructMatrix(int p[][10], int n, int a[], int b[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            p[i][j] = a[i] * b[j];
        }
    }
}

void showArray2D(int matrix[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

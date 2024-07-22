#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to add two matrices
void addMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to transpose a matrix
void transposeMatrix(int mat[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[j][i] = mat[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS] = {{1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}};
    
    int matrix2[ROWS][COLS] = {{9, 8, 7},
                                {6, 5, 4},
                                {3, 2, 1}};
    
    int result[ROWS][COLS]; // Resultant matrix
    
    // Add matrices
    printf("Matrix 1:\n");
    printMatrix(matrix1);
    printf("\nMatrix 2:\n");
    printMatrix(matrix2);
    addMatrices(matrix1, matrix2, result);
    printf("\nAddition result:\n");
    printMatrix(result);
    
    // Multiply matrices
    multiplyMatrices(matrix1, matrix2, result);
    printf("\nMultiplication result:\n");
    printMatrix(result);
    
    // Transpose matrix 1
    transposeMatrix(matrix1, result);
    printf("\nTranspose of Matrix 1:\n");
    printMatrix(result);
    
    return 0;
}


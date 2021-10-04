#include <stdio.h>
#include <stdlib.h>
 
// Edit MACROs here, according to your Matrix Dimensions for mat1[R1][C1] and mat2[R2][C2]
#define R1 4            // number of rows in Matrix-1
#define C1 4            // number of columns in Matrix-1
#define R2 4            // number of rows in Matrix-2
#define C2 4            // number of columns in Matrix-2
 
void mulMat(int mat1[][C1], int mat2[][C2]) {
    int rslt[R1][C2];
 
    printf("Multiplication of given two matrices is:\n\n");
 
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            rslt[i][j] = 0;
 
            for (int k = 0; k < R2; k++) {
                rslt[i][j] += mat1[i][k] * mat2[k][j];
            }
 
            printf("%d\t", rslt[i][j]);
        }
 
        printf("\n");
    }
}
 
int main(void) {
    // Square Matrices
    // R1 = 4, C1 = 4 and R2 = 4, C2 = 4 (Update these values in MACROs)
    int mat1[R1][C1] = {
            {1, 1, 1, 1},
            {2, 2, 2, 2},
            {3, 3, 3, 3},
            {4, 4, 4, 4}
    };
 
    int mat2[R2][C2] = {
            {1, 1, 1, 1},
            {2, 2, 2, 2},
            {3, 3, 3, 3},
            {4, 4, 4, 4}
    };
 
   
 
    if (C1 != R2) {
        printf("The number of columns in Matrix-1  must be equal to the number of rows in "
                "Matrix-2\n");
        printf("Please update MACROs value according to your array dimension in "
                "#define section\n");
 
        exit(EXIT_FAILURE);
    }
 
    mulMat(mat1, mat2);
 
    return 0;
}
 

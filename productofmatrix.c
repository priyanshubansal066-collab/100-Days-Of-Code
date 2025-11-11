#include <stdio.h>
int main()
{
    int MatrixA[2][2] = {{1, 2},
                         {3, 4}};
    int MatrixB[2][2] = {{5, 6},
                         {7, 8}};
    int MatrixProduct[2][2];
    int i, j;
    printf("Product of the two matrices is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            MatrixProduct[i][j] = MatrixA[i][j] * MatrixB[i][j];
            printf("%d ", MatrixProduct[i][j]);
        }
        printf("\n");
    }
    return 0;
}
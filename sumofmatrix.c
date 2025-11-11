#include <stdio.h>
int main()
{
    int MatrixA[3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};

    int MatrixB[3][3] = {{10, 11, 12},
                         {13, 14, 15},
                         {16, 17, 18}};
    int MatrixSum[3][3];
    int i, j;
    printf("Sum of the two matrices is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            MatrixSum[i][j] = MatrixA[i][j] + MatrixB[i][j];
            printf("%d ", MatrixSum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
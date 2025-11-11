#include <stdio.h>
int main()
{
    int Matrix[3][3];

    int Symmetric = 1;
    printf("Enter elements of 3x3 matrix :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d]:", i, j);
            scanf("%d", &Matrix[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Matrix[i][j] != Matrix[j][i])
            {
                Symmetric = 0;
                break;
            }
        }
    }

    if (Symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}

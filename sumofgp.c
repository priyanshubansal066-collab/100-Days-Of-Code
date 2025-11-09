#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0;
    int num = 3, den = 4;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    sum = 1.0;

    for (i = 2; i <= n; i++)
    {
        sum += (float)num / den;
        num += 2;
        den += 2;
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}

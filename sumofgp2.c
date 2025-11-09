#include <stdio.h>

int main()
{
    int i, n;
    float num = 2.0, den = 3.0, sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += num / den;
        num += 2;
        den += 4;
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}

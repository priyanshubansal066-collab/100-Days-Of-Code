#include <stdio.h>

int main()
{
    int n, i, pos = 0, neg = 0, zero = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("\nTotal Positive Numbers = %d", pos);
    printf("\nTotal Negative Numbers = %d", neg);
    printf("\nTotal Zeros = %d", zero);

    return 0;
}

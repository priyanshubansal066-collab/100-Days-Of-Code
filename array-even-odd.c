#include <stdio.h>

int main()
{
    int n, i, even = 0, odd = 0;

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
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nTotal Even Numbers = %d", even);
    printf("\nTotal Odd Numbers = %d", odd);

    return 0;
}

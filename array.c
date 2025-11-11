#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements of the array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d ", arr[i]);
    }

    return 0;
}

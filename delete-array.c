#include <stdio.h>

int main()
{
    int n, i, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {
        printf("Invalid position! Deletion not possible.");
    }
    else
    {
        for (i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("\nArray after deletion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

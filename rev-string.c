#include <stdio.h>
#include <string.h>
int main()
{
    char num[100];
    printf("Enter the string: ");
    scanf("%s", num);
    int len = strlen(num);
    printf("The string in reverse order is:\n");
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", num[i]);
    }
    printf("\n");
    return 0;
}
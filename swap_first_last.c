#include <stdio.h>

int main()
{
    int num, first, last, temp, digits = 1, swapNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        digits *= 10;
    }
    first = temp;

    swapNum = last * digits + (num % digits / 1) * 1 + first - last;

    printf("Number after swapping first and last digit: %d\n", swapNum);

    return 0;
}

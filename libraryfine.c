#include <stdio.h>
int main()
{
int days,Fine;
printf("Enter the number of days the book is returned late:");
scanf("%d", &days);
if (days <=5)
{
    Fine = 2 * days;

printf("The Fine is %d\n", Fine);
}
else if (days <=10)
{
    Fine = ((5 * 2) + (days - 5)*4);

printf("The Fine is %d\n", Fine);
}
else if (days <=30)
{
    Fine = ( (5 * 2) + (5 * 4) + (days - 10)*6);

printf("The Fine is %d\n", Fine);
}
else
{
printf("The membership is cancelled\n");
}
return 0;

}
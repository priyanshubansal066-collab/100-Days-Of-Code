#include <stdio.h>

int main()
{
int n,k = 0;

printf("Enter the number: \n");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
    if(n % i ==0)
    {
        k++;
    }

}
if(k == 2)
    {
        printf("number is prime\n");
    }
    else
    {
        printf("number is not prime\n");
    }



}

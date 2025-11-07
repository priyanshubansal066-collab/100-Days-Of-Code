#include <stdio.h>
int main()
{
int i,n;
int product=1;
printf("Enter the number: ");
scanf("%d" ,&n);
for(i=1;i<=n;i++)
if(i%2==0)
{
    product=product*i;
}

printf("The product of even numbers up to %d is: %d\n",n,product);
return 0;


}
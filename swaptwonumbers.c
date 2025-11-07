#include <stdio.h>
int main()
{
int a ,b ,num;

printf("Enter two numbers:\n");
scanf("%d %d",&a,&b);

printf("Before swapping: a=%d, b=%d\n",a,b);

num = a;
a = b;
b = num;

printf("After swapping: a=%d, b=%d\n",a,b);

return 0;

}
#include <stdio.h>

int main(int argc, char** argv){

        int a;
        int b;
        int adding;
	int subtracting;
	int multiplying;
	int quotient;

        printf("Enter the first number: \n");
        scanf("%d", &a);

        printf("Enter the second number: \n");
        scanf("%d", &b);

        adding = a + b;
	subtracting = a - b;
	multiplying = a * b;
	quotient = a / b;

        printf("The result of adding %d and %d is : %d\n", a,b, adding);
	printf("The result of subtracting %d and %d is : %d\n", a,b, subtracting);
	printf("The result of multiplying %d and %d is : %d\n", a,b, multiplying);
	printf("The result of quotient %d and %d is : %d\n", a,b, quotient);

        return 0;

}

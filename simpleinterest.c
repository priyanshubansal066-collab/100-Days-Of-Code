#include <stdio.h>

 int main(){
	float principal, rate, time, simpleinterest;
	 printf("Enter Principal Amount:");
	 scanf("%f", &principal);

	 printf("Enter the Rate of Interest:");
	scanf("%f", &rate);

	 printf("Enter the  Time(in years):");
         scanf("%f", &time);

         simpleinterest = (principal * rate * time)/ 100;

         printf("Simple Interest = %.2f\n", simpleinterest);
        
        return 0;

        
}
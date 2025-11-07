#include <stdio.h>
int main()
{
    int profit,loss;
    printf("Enter the profit amount: ");
    scanf("%d", &profit);
    printf("Enter the loss amount: ");
    scanf("%d", &loss);

    if(profit >0 && loss == 0)
    {
        printf("The company is in profit of %d\n", profit);
    }
    else if(loss >0 && profit == 0)
    {
        printf("The company is in loss of %d\n", loss);
    }
    else if(profit == 0 && loss == 0)
    {
        printf("The company is neither in profit nor in loss.\n");
    }
    else
    {
        printf("Invalid input: Both profit and loss cannot be non-zero simultaneously.\n");
    }
    return 0;









}
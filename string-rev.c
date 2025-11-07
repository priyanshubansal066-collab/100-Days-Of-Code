# include <stdio.h>
int main() {
    int numbers[10];
    int i;

    printf("Enter 10 numbers: \n");
    for(i = 0; i < 10; i++) {
printf("Enter Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("The numbers in reverse order are: \n");
    for(i = 9; i >= 0; i--) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
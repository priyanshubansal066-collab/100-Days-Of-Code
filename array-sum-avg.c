#include <stdio.h>
int main() {
    int arr[7];
    int sum = 0;
    float avg;

    printf("Enter 7 numbers: \n");
    for(int i = 0; i < 7; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
}
    avg = sum / 7.0;
    printf("The sum of the array is: %d\n", sum);
    printf("The average of the array is: %.2f\n", avg);
    return 0;
}
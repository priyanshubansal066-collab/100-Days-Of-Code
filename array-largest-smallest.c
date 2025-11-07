#include <stdio.h>
int main() {
    int arr[5];
    int i;
    int largest, smallest;
    printf("Enter 5 numbers: \n");
    for(i = 0; i < 5; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr[i]);
}
    smallest = arr[0];
    largest = arr[0];
    for(i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);
    return 0;
}
#include <stdio.h>
int main() {
    int N;
    int sum = 0;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter %d numbers: \n", N);
    for(int i = 0; i < N; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    printf("The sum of even numbers in the array is: %d\n", sum);
    return 0;
}    
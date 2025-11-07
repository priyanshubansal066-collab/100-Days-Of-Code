#include <stdio.h>


int main(){

    int marks[5] = { 50, 60, 70, 90, 40 };
    int markslen=sizeof(marks)/sizeof(marks[0]);
    int sum=0;

    printf("There are %d students in the class\n", markslen);

    for(sum=0; sum<markslen;sum++){

        printf("Marks of student %d is %d\n" , sum+1, marks[sum]);
    }

    return 0;

}
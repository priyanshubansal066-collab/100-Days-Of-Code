#include <stdio.h>
int main()
{
    int time, hour, minutes, seconds;


printf("Enter the time in seconds:\n");
scanf("%d" ,&seconds);

hour = seconds / 3600;
minutes= (seconds % 3600)/60;
seconds = seconds % 60;

{
    
    printf("hour= %d \n", hour);
    printf("minutes= %d \n", minutes);
    printf("seconds= %d \n", seconds);

}







}
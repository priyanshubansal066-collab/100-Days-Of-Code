#include <stdio.h>
int main(){
int perc;

printf("Enter the percentage:");
scanf("%d",&perc);

 if (perc >= 90 && perc <= 100) {
    printf("Grade A\n");
}
else if (perc >= 80 && perc <= 89) {
    printf("Grade B\n");
}
else if (perc >= 70 && perc <= 79) {
    printf("Grade C\n");
}
else if (perc >= 60 && perc <= 69) {
    printf("Grade D\n");
}

else if(perc >= 0 && perc <= 59) {
    printf("Grade F\n");
}
else {
    printf("Invalid percentage\n");
}


return 0;
}
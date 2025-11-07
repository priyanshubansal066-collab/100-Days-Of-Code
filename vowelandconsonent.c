#include <stdio.h>
int main(){

char letter;

printf("Enter the character:");
scanf("%c",&letter);
if( letter == 'a'|| letter == 'e' || letter == 'i' || letter == 'o'|| letter == 'u'|| letter == 'A'|| letter == 'E' || letter == 'I' || letter == 'O'|| letter == 'U') 
{
    printf("%c is vowel\n",letter);
}
else
{
    printf("%c is consonent\n",letter);
}






}
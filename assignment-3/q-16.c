#include<stdio.h>
int main()
{
    char check;
    printf("enter the character:\n");
    scanf("%c",&check);
    if((check>=65)&&(check<=90))
    {
        printf("upper character");
    }
    else if((check>=97)&&(check<=122))
    {
         printf("lower character");
    }
    else if((check>=48)&&(check<=57))
    {
         printf("digit");
    }
    else
    {
        printf("special characters");
    }
  return 0;

}
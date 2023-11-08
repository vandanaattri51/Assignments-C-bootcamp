#include<stdio.h>
int main()
{
    char check;
    printf("enter the character:\n");
    scanf("%c",&check);
    if((check >=65) && (check<=90))
    {
        printf("upper character\n");
    }
    else if((check >=97)&&(check<=122))
    {
        printf("lower character\n");
    }
    return 0;
}
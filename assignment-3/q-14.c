#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    if((n%7==0)||(n%3==0))
    {
        printf("number is divisible by 7");
    }
    else
    {
        printf("number is divisble by 3");
    }
}
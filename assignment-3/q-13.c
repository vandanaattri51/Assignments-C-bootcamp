#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if((n%3==0)&&(n%2==0))
    {
        printf("number is divisible by 3 and 2");
    }
    else
    {
        printf("number is not divisible by 3and 2");
    }
    return 0;
}
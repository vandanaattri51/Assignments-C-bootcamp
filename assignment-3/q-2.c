#include<stdio.h>
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("number %d is divisible by 5 ",n);
    }
    else
    {
        printf("number %d is not divisible by 5",n);
    }
    return 0;
}
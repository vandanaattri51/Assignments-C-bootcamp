#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the number=");
    scanf("%d",&n);
    sum=sum+n%10;
    n=n/10;
    sum=sum+n%10;
    n=n/10;
    sum=sum+n;
    printf("enter the sum of digits is %d",sum);
    return 0;
}
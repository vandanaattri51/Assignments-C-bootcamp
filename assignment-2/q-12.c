#include<stdio.h>
int main()
{
    int n,x;
    printf("enter the number=");
    scanf("%d",&n);
    x=(((n%10)*100)+(n/10));
    printf("After reverse=%d",x);
    return 0;
}
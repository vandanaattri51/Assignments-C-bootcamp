#include<stdio.h>
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    if((n&1)==1)
    printf("number is odd");
    else 
    {
        printf("number is even");
    }
    return 0;
}
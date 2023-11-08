#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two numbers");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("a is greater");
    }
    else if(a==b)
    {
        printf("boths are equal");
    }
    else
    {
        printf("b is greater");
    }
    return 0;
}
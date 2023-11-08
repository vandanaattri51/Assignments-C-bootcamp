#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the numbers\n");
    scanf("a=%d \n b=%d  \n c=%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is greater than ");
    }
    else if (b>a&&b>c)
    {
        printf("b is greater than ");
    }
     else if (c>a&&c>b)
    {
        printf("c is greater than ");
    }
    else if(a==b || b==c || c==a)
    {
        printf("there are two greater number!!");
    }
    return 0;
}
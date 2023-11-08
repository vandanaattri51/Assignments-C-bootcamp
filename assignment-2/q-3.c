#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the number\n");
    scanf("a=%d b=%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping a numbers \n a=%d\n b=%d",a,b);
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number before swapping\n");
    scanf("a=%d b=%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("nuber after swapping is \n a=%d \n b=%d",a,b);
    return 0;
}


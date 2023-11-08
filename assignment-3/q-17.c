#include<stdio.h>
int main()
{
    int side1,side2,side3; 
    printf("enter the sides of triangle:\n");
    scanf("side1=%d \nside2=%d \nside3=%d",&side1,&side2,&side3);
    if(side1+side2>side3 && side1+side3>side2 && side3+side2>side1)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is not valid");
    }
    return 0;
}
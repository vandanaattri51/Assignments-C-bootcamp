#include<stdio.h>
int main()
{
    int month,year;
    printf("enter the month and year:\n");
    scanf("%d\n %d",&month,&year);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        printf("31 days");
    }
    else if(month==4||month==6||month==9||month==11)
    {
        printf("30 days");
    }
    else if((month==2)&&((year%4==0)&&(year%100!=0)||(year%400==0)))
    {
        printf("29 days");
    }
    else
    {
        printf("28 days");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    float cp,sp,profitper,lossper,profit,loss;
    printf("enter the cp and sp\n");
    scanf("%d\n %d",&cp,&sp) ;
    if(cp>sp)
    {
    loss=cp-sp;
    lossper=(loss/cp)*100;
    printf("lossper is %.1f",lossper);
    }
    else if(cp<sp)
    {
    profit=sp-cp;    
    profitper=(profit/cp)*100;
    printf("profitper is %.1f",profitper);
    }
  return 0;
}
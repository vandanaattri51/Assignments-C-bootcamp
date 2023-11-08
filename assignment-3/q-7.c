#include<stdio.h>
#include<math.h>
int main()
{ 
    float a,b,c,d, root1,root2;
    printf("coffcient of x^2,x and constant\n");
    scanf("%1f %1f %1f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("roots are distict");
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("\nroots are %5.2f %5.2f\n",root1,root2); 
    }
    else if(d==0)
    {
         printf("roots are equal");
         root1=-b/(2*a);
         printf("\nroot is %5.2f\n",root1);
    }
    else 
    {
        printf("roots are imaginary");
    }
    return 0;
}
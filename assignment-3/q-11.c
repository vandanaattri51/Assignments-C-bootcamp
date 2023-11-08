#include<stdio.h>
int main()
{
   printf("this is my report card\n\n");
   float eng,physics,chemistry,maths,computer,physical,total_marks,percentage; 
   printf("enter the marks of subjects: \n");
   scanf("%f %f %f %f %f %f",&eng,&physics,&chemistry,&maths,&computer,&physical);
   total_marks=eng+physics+chemistry+maths+computer+physical;
   printf("\n total marks %f\n",total_marks);
   percentage=(total_marks/600)*100;
   printf(" percentage is:%.1f%%\n",percentage);
   if(percentage > 33)
   {
    printf("passed\n");
   }
   else
   {
    printf("failed\n");
   }
   return 0;
}
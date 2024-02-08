#include <stdio.h>
int main(){
    int i = 1; 
    
    printf("The first 10 odd natural numbers are: \n");
    while (i <= 10){
        printf("%d\n", 2*i - 1);
        i++;
    }
    return 0;
}
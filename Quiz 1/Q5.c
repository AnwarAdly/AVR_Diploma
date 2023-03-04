#include<stdio.h>
void main (void){
    int n , sum=0  ;
    for(n=1;n<=100;n++)
    {
        sum+=n;
    }
    printf("The sum of first 100 integers : %d ",sum);
}

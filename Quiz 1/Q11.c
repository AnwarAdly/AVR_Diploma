#include<stdio.h>
#include<math.h>
void main (void){
    int num , i , fact=1 ;
    printf("Enter positive integer : ");
    scanf("%d",&num);
    if (num < 0)
        printf("No factorial for negative number \n");
    else
    {
        for (i = 1; i <= num; i++)
        {
            fact *= i;
        }
        printf("The factorial is : %d \n",fact);
    }
}

#include<stdio.h>
void main (void){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=5-(i-1) && j<=5+(i-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

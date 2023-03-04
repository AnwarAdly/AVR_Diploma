#include<stdio.h>
void posorneg(signed int );
void main (void){
    signed int num ;
    printf("Enter the number : ");
    scanf("%d",&num);
    posorneg(num);
}
void posorneg(signed int x ){
if (x>=0)
    printf("the number is positive \n");
else
    printf("the number is negative \n");
}

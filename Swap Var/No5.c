#include<stdio.h>
void swap(int* ,int* );
void main (void){
    int num1,num2;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    swap(&num1,&num2);
    printf("First number become : %d \n",num1);
    printf("Second number become : %d \n",num2);
}
void swap(int *x,int *y){
    if(*x==*y)
        return;
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}


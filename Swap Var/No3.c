#include<stdio.h>
void main (void){
    int num1,num2;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("First number become : %d \n",num1);
    printf("Second number become : %d \n",num2);
}


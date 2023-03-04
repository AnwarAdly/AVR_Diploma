#include<stdio.h>
#include<math.h>
void main (void){
    int num1,num2,result;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    result = (((num1 + num2) * 3)-10) ;
    printf("The result is : %d ",result);
}

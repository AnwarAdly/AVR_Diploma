#include<stdio.h>
void multiple(int , int );
void main (void){
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    multiple(num1,num2);
}
void multiple(int x,int y){
    if (x%y==0)
        printf("The %d is multiple of %d \n",x,y);
    else
        printf("The %d is not multiple of %d \n",x,y);

}


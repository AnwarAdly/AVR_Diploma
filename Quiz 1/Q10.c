#include<stdio.h>
void main (void){
    int num;
    printf("Enter positive integer : ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is not a prime number \n",num);
    }
    else{
        printf("%d is a prime number \n",num);
    }
}

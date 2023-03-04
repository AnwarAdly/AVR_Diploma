#include<stdio.h>
void evenorodd(int );
void main (void){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    evenorodd(num);
}
void evenorodd (int x){
    if(x%2==0)
        printf("The number is even \n");
    else
        printf("The number is odd \n");
}

#include<stdio.h>
int Base_2 (int );
void main (void){
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    Base_2(x);
}
int Base_2 (int num){
    if(num && (!(num&(num-1))))
        return 0;
    else
        return 1;
}

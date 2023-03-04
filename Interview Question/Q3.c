#include<stdio.h>
int Power_3 (int );
void main (void){
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    Power_3(x);
}
int Power_3 (int num){
    if(num%3==0)
        return 0;
    else
        return 1;
}

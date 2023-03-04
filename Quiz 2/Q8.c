#include<stdio.h>
int prime(int , int );
void main (void){
    int interval1,interval2;
    printf("Enter the intervals : ");
    scanf("%d%d",&interval1,&interval2);
    prime(interval1,interval2);
}
int prime(int x,int y){
    for(x=0;x<y;x++){
        if(x%2 != 0)
            printf("%d \t",x);
    }
}

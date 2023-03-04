#include<stdio.h>
#include<math.h>
void main(void){
    int x,y ;
    float result ;
    printf("Enter positive integer : ");
    scanf("%d",&x);
    result = sqrt(x);
    y=result;
    if(y==result)
        printf("%d is a perfect square \n",x);
    else
        printf("%d is not a perfect square \n",x);
}

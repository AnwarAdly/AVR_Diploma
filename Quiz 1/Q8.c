#include<stdio.h>
void main(void){
    int x,y,z;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&x,&y,&z);
    if (x>y&&y>z)
        printf("The smallest number is : %d \n",z);
    else if (x>y&&z>x)
        printf("The smallest number is : %d \n",y);
    else
        printf("The smallest number is : %d \n",x);
}

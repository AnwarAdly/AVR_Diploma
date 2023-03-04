#include <stdio.h>
#include<math.h>
void main(void){
    int a, n, r,tn, sum = 0;
    printf(" Please Enter First Number of an Geometric Series:  ");
    scanf("%d", &a);
    printf(" Please Enter the Total Numbers in this Geometric Series:  ");
    scanf("%d", &n);
    printf(" Please Enter the Common Ratio:  ");
    scanf("%d", &r);
    sum = (a * (1 - pow(r, n ))) / (1- r);
    tn = a * (pow(r, n - 1));
    printf("\n The Sum of Geometric Series =  %d", sum);
    printf("\n The tn Term of Geometric  Series = %d \n", tn);
}

#include<stdio.h>
void main (void){
    int cels,fahr;
    printf("The temperature in Celsius is : " );
    scanf("%d",&cels);
    fahr=(cels*(9/5))+32;
    printf("The temperature in Fahrenheit is : %d degree fahrenheit",fahr);
}

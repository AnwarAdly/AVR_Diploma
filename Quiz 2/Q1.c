#include<stdio.h>
float cube (float );
void main (void){
    float num , result=0;
    scanf ("%f",&num);
    result = cube(num);
    printf("The cube of %f = %f \n",num,result);
}
float cube (float x){
    float result;
    result=(x*x*x);
    return result;
}

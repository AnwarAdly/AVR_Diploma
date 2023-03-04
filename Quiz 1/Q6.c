#include<stdio.h>
const float pi=3.14;
void main (void){
    float r,area,circum;
    printf("The radius of the circle is : ");
    scanf("%f",&r);
    area=pi*(r*r);
    circum=2*pi*r;
    printf("The area of circle = %f \n",area);
    printf("The circumference of circle = %f \n",circum);
}

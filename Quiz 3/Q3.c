#include<stdio.h>
typedef struct complex{
    int real;
    float imag;
} comp;
void add_complex (comp ,comp );
void main (void){
    comp comp1,comp2;
    printf("Enter real number : ");
    scanf("%d",&comp1.real);
    printf("Enter imag number : ");
    scanf("%f",&comp1.imag);
    printf("Enter real number : ");
    scanf("%d",&comp2.real);
    printf("Enter imag number : ");
    scanf("%f",&comp2.imag);
    printf("The two complex number are : %d +i %f , %d+i %f \n",comp1.real,comp1.imag,comp2.real,comp2.imag );
    add_complex (comp1,comp2);
}
void add_complex (comp comp1,comp comp2){
    comp result;
    result.real=comp1.real+comp2.real;
    result.imag=comp1.imag+comp2.imag;
    printf("The result of adding two complex is : %d +i %f \n",result.real,result.imag);
}

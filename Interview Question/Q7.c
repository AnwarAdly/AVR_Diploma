#include<stdio.h>
#define INT_BITS 32
int Rotate(int ,int );
void main (void){
    int num;
    printf("Enter binary number : ");
    scanf("%d",&num);
    printf("Binary number %d after converting two nipples is %d \n",num,Rotate(num,4));
}
int Rotate(int n,int rot) {
   return (n << 1) | ((n >> INT_BITS) & 1);
}

#include<stdio.h>
void main (void){
    int data=0xD1;
    printf("Data before swapping : %X \n",data);

    data= ((data<<4)&0xff)|((data>>4)&0xff);

    printf("Data after swapping  : %X \n",data);

    return 0;
}

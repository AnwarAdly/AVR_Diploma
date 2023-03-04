#include<stdio.h>
void main(void){
    int a[10],num,i,bit;
    printf("Enter the number to convert: ");
    scanf("%d",&num);
    for(i=0;num>0;i++){
        a[i]=num%2;
        num=num/2;
    }
    printf("Binary of Given Number is = ");
    for(i=i-1;i>=0;i--)
        printf("%d",a[i]);
    bit=a[i] & 0x08;  /* bit= (a[i] << 4) & 1 ; */
    if (bit==0x08)
        printf("\nThe fourth bit from LSB is 1 \n");
    else
        printf("\nThe fourth bit from LSB is 0 \n");
}

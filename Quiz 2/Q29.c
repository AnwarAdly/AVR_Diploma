#include<stdio.h>
void main (void){
    int arr1[5],*ptr,i;
    printf("Enter elements of first array : ");
    for(i=0;i<5;i++)
        scanf("%d",&arr1[i]);
    printf("Elements of second array : ");
    for(i=0;i<5;i++){
        *ptr=arr1[i];
        printf("%d \n",*ptr);
    }
}

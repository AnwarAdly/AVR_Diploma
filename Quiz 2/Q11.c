#include<stdio.h>
#include<conio.h>
int total(int x[] , int  );
void main (void){
    int arr[5],i,size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements of array : ");
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    printf("The sum of array elements = %d \n",total(arr,size));
}
int total(int x[], int size){
    int i,sum=0;
    for(i=0;i<size;i++)
        sum+=x[i];
    return sum;
}

#include<stdio.h>
int i,counter=0;
int The_Longest_Occurance (int arr[] ,int ,int );
void main (void){
    int arr[20],size,SearchNo;
    printf("Enter size of array :");
    scanf("%d",&size);
    printf("Enter elements of array : ");
    for (i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Enter the searching number : ");
    scanf("%d",&SearchNo);
    The_Longest_Occurance(arr[size],size,SearchNo);
    printf("The number %d occurs consecutivly in array %d times \n",SearchNo,counter);
}
int The_Longest_Occurance (int arr[20],int size,int SearchNo){
    for (i=0;i<size;i++)
        if(SearchNo==arr[i])
            counter++;
    return counter ;
}

#include<stdio.h>
int arr[20],i, *ptr;
int The_Arrangement_Array (int ,int );
void main (void){
    int x,y;
    printf("Enter the lower and upper value : ");
    scanf("%d%d",&x,&y);
    The_Arrangement_Array(x,y);
    printf("The array is : %d \n",ptr);
}
int The_Arrangement_Array (int LWR ,int UPR ){
    ptr=&arr[20];
    if(LWR<UPR){
            for (i=LWR;i<UPR;i++){
                ptr=UPR-1;
            }
            return ptr;
    }
    else{
        for(i=0;i<2;i++)
            printf("The array index %d contain 0xFF \n",i);
    }
}

#include <stdio.h>

#define ARR_SIZE 100

int main()
{
    int arr[ARR_SIZE],i;
    int num_index;
    printf("Please enter the element index : ");
    scanf("%d",&num_index);
    arr[0] = 1;
    for(i=1;i<ARR_SIZE;i++) // fill the 100 array elements
    {
    	arr[i]=arr[i-1]+2; //each element equals to the previous one + 2
    }
    printf("\nThe %dth term is:%d",num_index,arr[num_index-1]);
    return 0;
}


#include<stdio.h>
#include<conio.h>
void main() {
	int arr[5];
	int i, sum = 0;
	int *ptr;
	printf("Enter array elements : ");
	for (i = 0; i < 5; i++)
        scanf("%d",&arr[i]);
    ptr = arr;
	for (i = 0; i < 5; i++) {
	    sum += *ptr;
		ptr++;
	}
	printf("The sum of array elements : %d \n", sum);
}

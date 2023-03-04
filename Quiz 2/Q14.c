#include <stdio.h>
int FirstOccurrence(int arr[], int , int );
int arr[30], size;
void main(void){
	int i,req;
    printf("Enter size of an array: ");
    scanf("%d",&size);
    printf("Enter elements of an array:");
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    printf("Enter requried number : ");
    scanf("%d",&req);
	int index =FirstOccurrence(arr, size, req);
	if (index != -1)
		printf("First occurrence of element %d is found at index %d \n",req, index);
	else
		printf("-1");
}
int FirstOccurrence(int arr[], int n, int x){
	int low = 0, high = n- 1;
	int result = -1;
	while (low <= high){
		int mid = (low + high)/2;
		if (x == arr[mid]){
			result = mid;
			high = mid - 1;
		}
		else if (x < arr[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return result;
}
